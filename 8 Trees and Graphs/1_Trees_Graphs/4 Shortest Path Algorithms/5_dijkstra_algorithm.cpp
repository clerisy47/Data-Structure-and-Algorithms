// greedy algorithm
// shortest path from one fixed node to other nodes
// if graph has negative edges it fails
// if graph has negative cycle it fails

// priority queue/ ordered set is used instead of queue because  in queue/unordered sets nodes with maximum distance may come earlier and hence be recorded
// in the queue because of it makes unnecessary operations. In priority queue/ ordered set because of the if statement distant nodes are not recorded

#include <bits/stdc++.h>
using namespace std;

int dijkstra(int vertex1, int vertex2, vector<vector<pair<int, int>>> &graph)
{
    set<pair<int, int>> s;
    vector<int> distance(graph.size(), INT_MAX);
    s.insert({0, vertex1}); // as we need to sort on the basis of distance, we add pair of distance and node in set
    distance[vertex1] = 0;
    while (!s.empty())
    {
        auto it = *s.begin();
        int parent = it.second; // in pair of set vertex is second but in graph vertex is first
        s.erase(s.begin());

        for (auto &it : graph[parent])
        {
            int child = it.first;
            int wt = it.second;
            if (distance[parent] + wt < distance[child])
            {
                distance[child] = distance[parent] + wt;
                s.insert({distance[child], child});
            }
        }
    }

    return distance[vertex2] != INT_MAX ? distance[vertex2] : -1;
}

// TC: O(V + E(logV))
// SC: O(V+E)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Define a graph
    vector<vector<pair<int, int>>> graph = {
        {{1, 1}, {2, 3}, {3, 1}},
        {{4, 7}},
        {{4, 6}},
        {{6, 1}},
        {{5, 9}},
        {{9, 1}},
        {{7, 3}},
        {{8, 2}},
        {{9, 10}},
        {{}}};

    // Define vertices
    int vertex1 = 0;
    int vertex2 = 9;

    int shortestPath = dijkstra(vertex1, vertex2, graph);

    cout << shortestPath << endl;

    return 0;
}