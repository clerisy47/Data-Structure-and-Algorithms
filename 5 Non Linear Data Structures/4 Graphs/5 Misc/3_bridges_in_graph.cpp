// https://leetcode.com/problems/critical-connections-in-a-network/description/

#include <bits/stdc++.h>
using namespace std;

// tarzan's algortihm
// time = number of turns required to visit a node
// min_time = for a node, it is the minimum of min_time of its children(excluding parent)
// a node and its child are bridge if minTime of child is more than time of node
void dfs(int node, int parent, vector<vector<int>> &graph, vector<bool> &visited, int *ctr, vector<int> &time, vector<int> &minTime, vector<vector<int>> &bridges)
{
    visited[node] = true;
    time[node] = minTime[node] = *ctr;
    (*ctr)++;
    for (auto child : graph[node])
    {
        if (child != parent)
        {
            if (!visited[child])
            {

                dfs(child, node, graph, visited, ctr, time, minTime, bridges);
                minTime[node] = min(minTime[child], minTime[node]);
                if (minTime[child] > time[node])
                {
                    bridges.push_back({node, child});
                }
            }
            else
            {
                minTime[node] = min(minTime[child], minTime[node]);
            }
        }
    }
}
vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
{
    vector<vector<int>> graph(n);
    vector<bool> visited(n);
    vector<int> time(n);
    vector<int> minTime(n);
    vector<vector<int>> bridges;
    int ctr = 0;

    for (auto it : connections)
    {
        int u = it[0], v = it[1];
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(0, -1, graph, visited, &ctr, time, minTime, bridges);

    return bridges;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}