#include <bits/stdc++.h>
using namespace std;

void dfs(int parent, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &output)
{
    output.push_back(parent);
    visited[parent] = true;
    for (auto child : graph[parent])
    {
        if (!visited[child])
        {

            dfs(child, graph, visited, output);
        }
    }
}

// TC: O(V+ 2E) for single directional O(N+E)
// SC : O(2V) (for visited and recursion stack space) + O(n) (for output)

int main()
{
    // this will only do dfs in connected components, to do in a forest, we should use for loop like following problem
    return 0;
}