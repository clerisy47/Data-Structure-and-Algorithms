#include <bits/stdc++.h>
using namespace std;

// prim's algorithm
int minimumSpanningTree(int n, vector<vector<int>> graph[])
{
    set<pair<int, int>> s;
    vector<bool> visited(n, 0);
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
// TC: O(E*logE) + O(E*logE)
// SC: O(E) + O(V)

// krukshal's algorithm
class DisjointSet
{
    vector<int> parent, size;

public:
    DisjointSet(int n)
    {
        for (int i = 0; i <= n - 1; i++)
        {
            parent.push_back(i);
            size.push_back(1);
        }
    }
    int findParent(int vertex)
    {
        if (vertex == parent[vertex])
            return vertex;
        return parent[vertex] = findParent(parent[vertex]); // path compression
    }

    void unionSize(int v1, int v2)
    {
        int pv1 = findParent(v1);
        int pv2 = findParent(v2);
        if (pv1 == pv2)
            return;

        if (size[pv1] <= size[pv2])
        {
            parent[pv1] = pv2;
            size[pv1] += size[pv2];
        }
        else
        {
            parent[pv2] = pv1;
            size[pv2] += size[pv1];
        }
    }
};

int minimumSpanningTree(int n, vector<vector<int>> &edges)
{ // {{v1, v2, wt}} if given in graph form need to convert to edges form

    DisjointSet ds(n + 1);
    vector<vector<int>> edges_new;

    for (auto &it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        edges_new.push_back({wt, u, v}); //  need in this fromat to sort via weights
    }

    sort(edges_new.begin(), edges_new.end()); //  it is sorted in order of weights to ensure minimum weights get added first to form minimum spanning tree
    int sum = 0;
    for (auto &it : edges_new)
    {
        if (ds.findParent(it[1]) != ds.findParent(it[2]))
        {
            ds.unionSize(it[1], it[2]);
            sum += it[0];
        }
    }
    return sum;
}
// TC: O(N+E) + O(E logE) + O(E*4α*2)
// SC: O(N) + O(N) + O(E)

int main()
{
    return 0;
}