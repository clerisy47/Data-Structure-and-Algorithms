// kahn's algorithm

#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> indegree(n); // indegree: number of incoming nodes
    for (int i = 0; i <= n - 1; i++)
    {
        for (auto child : graph[i])
        {
            indegree[child]++;
        }
    }
    queue<int> q;
    for (int i = 0; i <=n-1; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> output;
    while (!q.empty())
    {
        int parent = q.front();
        output.push_back(parent);
        q.pop();

        for (int child : graph[parent])
        {
            indegree[child]--; 
            if(indegree[child]==0) q.push(child);
        }
    }
    return output;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}