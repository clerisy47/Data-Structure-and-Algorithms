// https://www.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1

#include <bits/stdc++.h>
using namespace std;

// Kosaraju's Algorithm
// 1) Sort the graph topologically
// 2) Reverse all the edges (because of this graph will be like a forest with strongly connected components as tree)
// 3) DFS

void dfs_sort(int parent, vector<vector<int>> &graph, vector<bool> &visited, stack<int> &sorted)
{
    // sorted.push(parent); // preorder transversal
    visited[parent] = true;
    for (auto child : graph[parent])
    {
        if (!visited[child])
        {

            dfs_sort(child, graph, visited, sorted);
        }
    }
    sorted.push(parent); // post order transversal ie push parent after pushing children
}

void reverse_edge(vector<vector<int>> &graph, vector<bool> &visited)
{
    int n = graph.size();
    vector<vector<int>> graph_reversed(n);
    for (int i = 0; i <= n - 1; i++)
    {
        visited[i] = false; // also reseting visited array
        for (auto it : graph[i])
        {
            graph_reversed[it].push_back(i); // originally it's graph[i].push_back(it)
        }
    }
    graph = graph_reversed;
}

void dfs(int parent, vector<vector<int>> &graph, vector<bool> &visited)
{
    visited[parent] = true;
    for (auto child : graph[parent])
    {
        if (!visited[child])
        {
            dfs(child, graph, visited);
        }
    }
}

int kosaraju(int n, vector<vector<int>> &graph)
{
    vector<bool> visited(n);
    stack<int> sorted;
    for (int i = 0; i <= n - 1; i++)
    {
        if (!visited[i])
        {
            dfs_sort(i, graph, visited, sorted);
        }
    }
    reverse_edge(graph, visited);
    int ctr = 0;
    while (!sorted.empty())
    {
        int parent = sorted.top();
        sorted.pop();
        if (!visited[parent])
        {
            dfs(parent, graph, visited);
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