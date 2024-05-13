#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &output)
{
    // output.push_back(node); // preorder transversal
    visited[node] = true;
    for (auto child : graph[node])
    {
        if (!visited[child])
        {

            dfs(child, graph, visited, output);
        }
    }
    output.push_back(node); // post order transversal ie push node after pushing children

}

// TC: O(V+ 2E) for single directional O(N+E)
// SC : O(2V) (for visited and recursion stack space) + O(n) (for output)

int main()
{
    // this will only do dfs in connected components, to do in a forest, we should use for loop like following problems
    return 0;
}