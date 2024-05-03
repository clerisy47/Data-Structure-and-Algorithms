// diameter: distance between the farthest nodes

#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, int parent, vector<vector<int>> &graph, vector<int> &depth)
{
    for (auto child : graph[vertex])
    {
        if (child != parent)
        {
            depth[child]=depth[vertex]+1;
            dfs(child, vertex, graph, depth);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2;
    cin >> n;
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
    int max_vertex = max_element(depth.begin(), depth.end())-depth.begin();
    fill(depth.begin(), depth.end(), 0);
    dfs(max_vertex, 0, graph, depth);
    cout<< *max_element(depth.begin(), depth.end());
    return 0;
}