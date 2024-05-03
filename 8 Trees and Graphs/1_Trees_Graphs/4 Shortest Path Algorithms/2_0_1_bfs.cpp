// what is the minimum number of edges that need to be reversed for a directed graph to have path from vertex 1 to N
// logic: assume all given directed graph to be of 0 weight and add 1 weight reverse of each edge which acts as punishing factor
// the minimum distance from vertex1 to vertex2 will be the number of edges need to be reversed

#include <bits/stdc++.h>
using namespace std;

int bfs(int vertex1, int vertex2, vector<vector<pair<int, int>>> &graph)
{
    deque<int> q; // dequeue is used in 0 1 bfs
    vector<int> distance(graph.size(), INT_MAX);
    q.push_back(vertex1);
    distance[vertex1] = 0;
    vector<int> output;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop_front();

        for (auto &it : graph[parent])
        {
            int child = it.first;
            int weight = it.second;

            if (distance[parent] + weight < distance[child]) // no need for visited array because of this
            {
                distance[child] = distance[parent] + weight;

                if (weight == 1)
                {
                    q.push_back(child);
                }
                else
                {
                    q.push_front(child);
                }
            }
        }
        if (distance[vertex2] != INT_MAX)
            return distance[vertex2];
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i <= m - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back({v, 0});
        graph[v].push_back({u, 1});
    }

    int vertex1 = 1, vertex2 = n;
    vertex1--;
    vertex2--;
    int distance = bfs(vertex1, vertex2, graph);
    cout << distance << endl;

    return 0;
}