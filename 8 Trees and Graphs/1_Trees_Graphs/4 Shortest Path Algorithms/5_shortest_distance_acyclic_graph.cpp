// after toposorting the number of recalculation done in same node is very less compared to using other algorithms

#include <bits/stdc++.h>
using namespace std;

void dfs(int parent, vector<vector<pair<int, int>>> &graph, vector<bool> &visited, vector<int> &output)
{
    visited[parent] = true;
    for (auto it : graph[parent])
    {
        int child = it.first;
        if (!visited[child])
        {

            dfs(child, graph, visited, output);
        }
    }
    output.push_back(parent); // we need to do post order transversal ie push parent after pushing children as they will be sorted after reversing later
}

vector<int> topoSort(vector<vector<pair<int, int>>> &graph)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> output;
    for (int vertex = 0; vertex <= n - 1; vertex++)
    {
        if (!visited[vertex])
        {
            dfs(vertex, graph, visited, output);
        }
    }
    reverse(output.begin(), output.end());
    return output;
}

void printVector(vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
}

int shortestDistance(int v1, int v2, vector<vector<pair<int, int>>> &graph)
{
    int n = graph.size();
    vector<int> distance(n, 1e9);
    distance[v1] = 0;
    vector<int> topoSorted = topoSort(graph);
    for (auto parent : topoSorted)
    {
        // relaxation of edge
        for (auto it : graph[parent])
        {
            int child = it.first;
            int wt = it.second;
            if (distance[parent] + wt < distance[child])
            {
                distance[child] = distance[parent] + wt;
            }
        }
    }
    return distance[v2];
}
// TC: O(V+E) (toposorting) + O(V+E) (relaxation)
// SC: O(V) {topological sort} + O(V) (shortest distance) + O(V) (visited array)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n);

    for (int i = 0; i <= m - 1; i++)
    {
        int v1, v2, weight;
        cin >> v1 >> v2 >> weight;
        graph[v1].push_back({v2, weight}); // unidirectional
    }

    int v1, v2;
    cin >> v1 >> v2;

    int shortestDist = shortestDistance(v1, v2, graph);

    cout << shortestDist << endl;

    return 0;
}