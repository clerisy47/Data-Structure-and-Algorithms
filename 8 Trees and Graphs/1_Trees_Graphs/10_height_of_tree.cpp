// height of vertice: number of edges from leaf node to any node

#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, int parent, vector<vector<int>> &graph, vector<int> &height)
{
    for (auto child : graph[vertex])
    {
        if (child != parent)
        {
            dfs(child, vertex, graph, height);
            if(height[child]+1>height[vertex]) height[vertex]=height[child]+1; // since there are multiple leaf nodes, we need to find the maximum
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
    vector<int> height(n+1);
    dfs(1, 0, graph, height);
  for (int i = 1; i <= m; i++)
    {
        cout<< height[i]<< endl;
    }

    return 0;
}