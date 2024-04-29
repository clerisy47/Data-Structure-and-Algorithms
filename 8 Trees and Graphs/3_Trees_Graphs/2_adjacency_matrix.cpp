#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, v1, v2;
    cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i <= m - 1; i++)
    {
        cin >> v1 >> v2;
        graph[v1 - 1][v2 - 1] = 1; // 1 based indexing
        graph[v1 - 1][v2 - 1] = 1; // if it is bidirectional
        // for weighted graph, 1 becomes wt
    }
    return 0;
}