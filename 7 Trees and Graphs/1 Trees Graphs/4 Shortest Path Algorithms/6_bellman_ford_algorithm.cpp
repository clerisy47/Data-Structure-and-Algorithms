// greedy algorithm
// shortest path from one fixed node to other nodes
// if graph has negative edges it doesn't fail
// it can detect negative cycle

#include <bits/stdc++.h>
using namespace std;

// this algorithm inputs edges and not the graph. In case it is undirected graph, edges should be input from both direction separately
vector<int> bellmanFord(int n, vector<vector<int>> &edges, int vertex) 
{
    vector<int> distance(n, INT_MAX);
    distance[vertex] = 0;
    for (int i = 0; i <= n - 2; i++) // need to perform relaxation only n-1 times for shortest path to be found
    {
        // relaxation of edge
        for (auto &it : edges)
        {
            int v1 = it[0];
            int v2 = it[1];
            int wt = it[2];
            if (distance[v1] != INT_MAX && distance[v1] + wt < distance[v2]) // distance[v1] != INT_MAX this is to prevent overflow
            {
                distance[v2] = distance[v1] + wt;
            }
        }
    }
    // negative cycle detection
    // if shortest distance still decreses after n-1 times, it means there is negative cycle which will decrease till negative infinity
    for (auto it : edges)
    {
        int v1 = it[0];
        int v2 = it[1];
        int wt = it[2];
        if (distance[v1] != INT_MAX && distance[v1] + wt < distance[v2])
        {
            return {-1}; 
        }
    }

    return distance;
}

// TC: O(V*E)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}