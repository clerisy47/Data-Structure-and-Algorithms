// dynamic programming
// all pair shortes node algorithm
// if graph has negative edges it fails
// if graph has negative cycle it fails

#include <bits/stdc++.h>
using namespace std;

// adjacency matrix
// if no edge exist the adjacency matrix should have infinity
void floydWashal(vector<vector<int>> &graph)
{
    int n = graph.size();

    for (int k = 0; k <= n - 1; k++)
    {
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                if (graph[i][k] != INT_MAX && graph[k][j] != INT_MAX) // to prevent overflow
                {
                    int new_distance = graph[i][k] + graph[k][j];
                    if (new_distance < graph[i][j])
                    {
                        graph[i][j] = new_distance;
                    }
                }
            }
        }
    }
}


// TC: O(V^3)
// SC: O(1) (excluding the input)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}