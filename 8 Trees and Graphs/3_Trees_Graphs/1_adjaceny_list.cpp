#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, v1, v2;
    cin >> n >> m;  // number of vertices and nodes
    vector<vector<int>> graph(n);
    for (int i = 0; i <= m - 1; i++)
    {
        cin >> v1 >> v2;
        graph[v1 - 1].push_back(v2 - 1); // 1 based indexing
        graph[v2 - 1].push_back(v1 - 1);
        // for weighted graph, push_back pairs instead of integer
    }
    return 0;
}