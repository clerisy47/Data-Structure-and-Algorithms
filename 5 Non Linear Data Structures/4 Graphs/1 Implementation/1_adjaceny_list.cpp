#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> inputGraphAdjacencyList(int n1, int n2)
{
    int v1, v2;
    vector<vector<int>> graph(n1 + 1); // 1 based indexing
    for (int i = 1; i <= n2; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1); // if it is bidirectional
        // for weighted graph, push_back pairs instead of integer
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2; // number of vertices and nodes   // in tree, n2 = n1-1
    inputGraphAdjacencyList(n1, n2);
    return 0;
}