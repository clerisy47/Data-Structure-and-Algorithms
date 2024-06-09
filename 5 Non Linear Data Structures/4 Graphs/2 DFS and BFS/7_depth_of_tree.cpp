// depth of vertice: number of edges from root node to any node

#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, int parent, vector<vector<int>> &graph, vector<int> &depth)
{
    for (auto child : graph[vertex])
    {
        if (child != parent)
        {
            depth[child]=depth[vertex]+1; // we should never take parent in this assignment as parent of root node is assumed to be -1
            dfs(child, vertex, graph, depth);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2;
    cin >> n; // in tree, m = n-1 so we don't need to input m
    m=n-1;
    vector<vector<int>> graph(n+1);
    for (int i = 0; i <= m - 1; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    vector<int> depth(n+1);
    dfs(1, 0, graph, depth);
    for (int x : depth)
    {
        cout << x << endl;
    }

    return 0;
}