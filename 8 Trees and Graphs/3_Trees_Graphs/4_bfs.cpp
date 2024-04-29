#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &graph)
{
    queue<int> q;
    vector<bool> visited(graph.size(), false);
    q.push(0);
    visited[0] = true;
    vector<int> output;
    while (!q.empty())
    {
        for (int child : graph[q.front()])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
        output.push_back(q.front());
        q.pop();
    }
    return output;
}
// TC: O(V+ 2E) for single directional O(V+E)
// SC : O(2V) (for visited and queue) + O(V) (for output)

int main()
{
    return 0;
}