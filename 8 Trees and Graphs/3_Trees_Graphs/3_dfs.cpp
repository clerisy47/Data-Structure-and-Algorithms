#include <bits/stdc++.h>
using namespace std;

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &output)
{
    if (visited[vertex])
        return;
    output.push_back(vertex);
    visited[vertex] = true;
    for (auto child : graph[vertex])
    {
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