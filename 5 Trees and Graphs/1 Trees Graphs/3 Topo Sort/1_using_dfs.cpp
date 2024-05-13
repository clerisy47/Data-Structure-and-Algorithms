#include <bits/stdc++.h>
using namespace std;

void dfs(int parent, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &output)
{
    visited[parent] = true;
    for (auto child : graph[parent])
    {
        if (!visited[child])
        {

            dfs(child, graph, visited, output);
        }
    }
    output.push_back(parent); // we need to do post order transversal ie push parent after pushing children as they will be sorted after reversing later

}

vector<int> topoSort(vector<vector<int>> &graph)
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
    reverse(output.begin(), output.end()); // or can use stack to avoid this
    return output;
}

void printVector(vector<int>& vec) {
    for(const auto& val : vec) {
        cout << val << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        int u, v;

        vector<vector<int>> graph(n);

        for (int i = 0; i <= m - 1; i++)
        {
            cin >> u >> v;
            graph[u].push_back(v);
        }

        vector<int> output = topoSort(graph);
        printVector(output);
    }

    return 0;
}