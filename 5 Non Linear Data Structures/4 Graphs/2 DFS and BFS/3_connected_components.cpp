#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited)
{
    visited[vertex] = true;
    for (auto child : graph[vertex])
    {
        if (!visited[child])
        {
            dfs(child, graph, visited);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2, ctr = 0;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<bool> visited(n + 1);
    for (int edge = 1; edge <= m; edge++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for (int vertex = 1; vertex <= n; vertex++)
    {
        if (!visited[vertex])
        {
            dfs(vertex, graph, visited);
            ctr++;
        }
    }
    cout << ctr;
    return 0;
}