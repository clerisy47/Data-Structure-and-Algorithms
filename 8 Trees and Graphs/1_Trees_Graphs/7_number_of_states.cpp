#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited)
{ // use 0 based indexing even if in question 1 based indexing is given
    visited[vertex] = true;
    for (int child = 0; child <= graph.size() - 1; child++) // change 1 (compared to dfs on adjacency_lists)
    {
        if (graph[vertex][child]&&!visited[child]) // change 2
        {
            dfs(child, graph, visited);
        }
    }
}

int findNumOfProvinces(vector<vector<int>> &graph)
{
    int ctr = 0;
    vector<bool> visited(graph.size());
    for (int vertex = 0; vertex <= graph.size() - 1; vertex++)
    {
        if (!visited[vertex])
        {
            dfs(vertex, graph, visited);
            ctr++;
        }
    }
    return ctr;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}