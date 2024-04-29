#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, int parent, vector<vector<int>> &graph, vector<bool> &visited, bool *isCycle)
{
    visited[vertex] = true;
    for (auto child : graph[vertex])
    {
        if (visited[child] && child != parent)
        {
            *isCycle = true;
            return;
        }
        if (!visited[child])
        {
            dfs(child, vertex, graph, visited, isCycle);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    vector<bool> visited(n);
    bool isCycle = false;

    for (int i = 0; i <= m - 1; i++)
    {
        cin >> v1 >> v2;
        graph[v1 - 1].push_back(v2 - 1);
        graph[v2 - 1].push_back(v1 - 1);
    }
    for (int i = 0; i <= n-1; i++)
    {
        if (!visited[i])
        {
            dfs(i, -1, graph, visited, &isCycle);
            if (isCycle)
                break;
        }
    }
    if (isCycle)
        cout << "Cycle detected\n";
    else
        cout << "No cycle detected\n";
    return 0;
}