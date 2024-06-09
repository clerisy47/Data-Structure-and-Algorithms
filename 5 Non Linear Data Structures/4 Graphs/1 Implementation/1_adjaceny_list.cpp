#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, v1, v2;
    cin >> n >> m;  // number of vertices and nodes   // in tree, m = n-1
    vector<vector<int>> graph(n+1); // 1 based indexing
    for (int i = 1; i <= m; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2); 
        graph[v2].push_back(v1); // if it is bidirectional
        // for weighted graph, push_back pairs instead of integer
    }
    return 0;
}