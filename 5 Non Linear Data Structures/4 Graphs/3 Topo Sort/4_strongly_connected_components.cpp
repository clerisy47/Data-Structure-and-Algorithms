// https://www.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1

#include <bits/stdc++.h>
using namespace std;

// Kosaraju's Algorithm
// 1) Sort the graph topologically
// 2) Reverse all the edges (because of this graph will be like a forest with strongly connected components as tree)
// 3) DFS

void dfs(int parent, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &output)
{
    visited[parent] = true;
    for (auto child : graph[parent])
    {
        if (!visited[child])
        {

            dfs(child, graph, visited, output);
        }
    }
    output.push_back(parent); // we need to do post order transversal ie push parent after pushing children as they will be sorted after reversing later
}

vector<int> topoSort(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> output;
    for (int vertex = 0; vertex <= n - 1; vertex++)
    {
        if (!visited[vertex])
        {
            dfs(vertex, graph, visited, output);
        }
    }
    reverse(output.begin(), output.end()); // or can use stack to avoid this
    return output;
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
    vector<int> sorted = topoSort(graph);
    reverse_edge(graph, visited);
    int ctr = 0;
    for (auto &parent : sorted)
    {
        if (!visited[parent])
        {
            dfs(parent, graph, visited);
            ctr++;
        }
    }
    return ctr;
}

// TC:  O(V+E) + O(V+E) + O(V+E) (for each function)
// SC: O(V)+O(V)+O(V+E)+ O(V)+O(V) (for stack, visited array and reversed graph)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}