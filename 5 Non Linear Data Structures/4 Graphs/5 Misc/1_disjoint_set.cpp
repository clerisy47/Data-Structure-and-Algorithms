#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
    vector<int> parent, rank, size;

public:
    DisjointSet(int n)
    {
        for (int i = 0; i <= n - 1; i++)
        {
            parent.push_back(i);
            rank.push_back(0);
            size.push_back(1);
        }
    }
    int findParent(int vertex)
    {
        if (vertex == parent[vertex])
            return vertex;
        return parent[vertex] = findParent(parent[vertex]); // path compression
    }

    // TC: O(4α(n))

    // we always do union of smaller to parent of larger graph in order to reduce computation
    void unionRank(int v1, int v2)
    {
        int pv1 = findParent(v1);
        int pv2 = findParent(v2);
        if (pv1 == pv2)
            return;
        if (rank[pv1] < rank[pv2])
        {
            parent[pv1] = pv2;
        }
        else if (rank[pv1] > rank[pv2])
        {
            parent[pv2] = pv1;
        }
        else
        {
            parent[pv1] = pv2;
            rank[pv1]++;
        }
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    DisjointSet ds(8); // making larger size set for one based indexing
    ds.unionSize(1, 2);
    ds.unionSize(2, 3);
    ds.unionSize(4, 5);
    ds.unionSize(6, 7);
    ds.unionSize(5, 6);

    if (ds.findParent(3) == ds.findParent(7))
    {
        cout << "Same\n";
    }
    else
        cout << "Not same\n";

    ds.unionSize(3, 7);

    if (ds.findParent(3) == ds.findParent(7))
    {
        cout << "Same\n";
    }
    else
        cout << "Not same\n";

    return 0;
}