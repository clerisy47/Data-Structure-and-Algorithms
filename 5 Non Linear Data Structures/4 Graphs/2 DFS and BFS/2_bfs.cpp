#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int vertex, vector<vector<int>> &graph)
{
    queue<int> q;
    vector<bool> visited(graph.size(), false);
    q.push(vertex);
    visited[vertex] = true;
    vector<int> output;
    while (!q.empty())
    {
        int parent = q.front();
        output.push_back(parent);
        q.pop();

        for (int child : graph[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
    return output;
}
// TC: O(V+ 2E) for single directional O(V+E)
// SC : O(2V) (for visited and queue) + O(V) (for output)

int main()
{
    return 0;
}