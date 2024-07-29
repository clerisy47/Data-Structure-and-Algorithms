// lowest common ancestor
// not the most optimal way

#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, int parent, vector<vector<int>> &graph, vector<int> &parents)
{
    parents[vertex] = parent;
    for (auto child : graph[vertex])
    {
        if (child != parent)
        {
            dfs(child, vertex, graph, parents);
        }
    }
}
int lca(int v1, int v2, vector<int> &parent)
{
    set<int> temp;
    int i = v1;
    while (i != 0)
    {
        temp.insert(i);
        i = parent[i];
    }
    i = v2;
    while (i != 0)
    {
        if (temp.find(i) != temp.end())
        {
            return i;
        }
        i = parent[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2;
    cin >> n;
    m = n - 1;
    vector<vector<int>> graph(n + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    vector<int> parents(n);
    dfs(1, 0, graph, parents);
    v1 = 7;
    v2 = 2;

    cout << lca(v1, v2, parents);

    return 0;
}