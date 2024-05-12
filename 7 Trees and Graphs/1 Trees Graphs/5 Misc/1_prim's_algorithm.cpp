#include <bits/stdc++.h>
using namespace std;

// Function to find sum of weights of edges of the Minimum Spanning Tree.
int minimumSpanningTree(int vertex, vector<vector<int>> graph[])
{
    set<pair<int, int>> s;
    vector<bool> visited(vertex, 0);
    s.insert({0, 0}); // {wt, vertex} initially weight from hypothetical parent to initial vertex is assumed to be 0
    int sum = 0;
    while (!s.empty())
    {
        pair<int, int> it = *s.begin();
        int parent = it.second;
        int wt = it.first;
        s.erase(s.begin());

        if (!visited[parent])
        {
            visited[parent] = 1;  // similar to dijkstra but with visited array since it doesn't compare distances
            sum += wt;
            for (auto it : graph[parent])
            {
                int children = it[0];
                int wt = it[1];
                if (!visited[children])
                {
                    s.insert({wt, children});
                }
            }
        }
    }
    return sum;
}

int main()
{

    int vertex = 5;
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    vector<vector<int>> graph[vertex];
    for (auto it : edges)
    {
        vector<int> tmp(2);
        tmp[0] = it[1];
        tmp[1] = it[2];
        graph[it[0]].push_back(tmp);

        tmp[0] = it[0];
        tmp[1] = it[2];
        graph[it[1]].push_back(tmp);
    }

    int sum = minimumSpanningTree(vertex, graph);
    cout << "The sum of all the edge weights: " << sum << endl;

    return 0;
}
