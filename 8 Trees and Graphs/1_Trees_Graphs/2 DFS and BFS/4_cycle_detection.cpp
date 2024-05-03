#include <bits/stdc++.h>
using namespace std;

void dfs(int parent, int grandparent, vector<vector<int>> &graph, vector<bool> &visited, bool *isCycle)
{
    visited[parent] = true;
    for (auto child : graph[parent])
    {
        if (visited[child] && child != grandparent)
        {
            *isCycle = true;
            return;
        }
        if (!visited[child])
        {
            dfs(child, parent, graph, visited, isCycle);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2;
    cin >> n >> m;
    vector<vector<int>> graph(n+1);
    vector<bool> visited(n+1);
    bool isCycle = false;

    for (int i = 1; i <= m; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, 0, graph, visited, &isCycle);
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