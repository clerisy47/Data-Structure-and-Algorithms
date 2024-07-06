#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> inputGraphAdjacencyMatrix(int n1, int n2)
{
    int v1, v2;
    vector<vector<int>> graph(n1, vector<int>(n1)); // 1 based indexing
    for (int i = 0; i <= n2 - 1; i++)
    // use 0 based indexing even if in question 1 based indexing is given
    {
        cin >> v1 >> v2;
        graph[v1 - 1][v2 - 1] = 1;
        graph[v1 - 1][v2 - 1] = 1; // if it is bidirectional
        // for weighted graph, 1 becomes wt
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    inputGraphAdjacencyMatrix(n1, n2);
    return 0;
}