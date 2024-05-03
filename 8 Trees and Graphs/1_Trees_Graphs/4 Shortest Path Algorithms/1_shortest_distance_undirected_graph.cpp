#include <bits/stdc++.h>
using namespace std;

int bfs(int vertex1, int vertex2, vector<vector<int>> &graph)
{
    queue<int> q;
    vector<bool> visited(graph.size(), false);
    vector<int> distance(graph.size(), INT_MAX);
    q.push(vertex1);
    visited[vertex1] = true;
    distance[vertex1] = 0;
    vector<int> output;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (auto &child : graph[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                distance[child] = distance[parent] + 1;
            }
        }
        if (distance[vertex2] != INT_MAX)
            return distance[vertex2];
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}