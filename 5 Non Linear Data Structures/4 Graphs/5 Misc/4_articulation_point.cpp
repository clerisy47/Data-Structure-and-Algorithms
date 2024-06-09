// https://www.geeksforgeeks.org/problems/articulation-point-1/1

#include <bits/stdc++.h>
using namespace std;

// tarzan's algortihm
void dfs(int node, int parent, vector<vector<int>> &graph, vector<bool> &visited, int *ctr, vector<int> &time, vector<int> &minTime, unordered_set<int> &aPoints)
{
    visited[node] = true;
    time[node] = minTime[node] = *ctr;
    (*ctr)++;
    int nChild = 0; // nChild is counted only for first node, if the node is
    for (auto child : graph[node])
    {
        if (child != parent)
        {
            if (!visited[child])
            {
                nChild++;
                dfs(child, node, graph, visited, ctr, time, minTime, aPoints);
                minTime[node] = min(minTime[child], minTime[node]);
                if (minTime[child] >= time[node] && parent != -1) // >= is used unlike > in bridges problem for parent this condition doesn't work hence separate and is used
                {
                    aPoints.insert(node);
                }
            }
            else
            {
                minTime[node] = min(minTime[node], time[child]); // if already visited then comparision is done between minTime and time unlike in bridges in graph
            }
        }
    }
    if (nChild >= 2 && parent == -1)
        aPoints.insert(node);
}
vector<int> articulationPoints(int n, vector<vector<int>> &graph)
{
    vector<bool> visited(n);
    vector<int> time(n);
    vector<int> minTime(n);
    unordered_set<int> aPoints; // set is used inorder to avoid duplicates
    int ctr = 0;
    dfs(0, -1, graph, visited, &ctr, time, minTime, aPoints);
    vector<int> ans(aPoints.begin(), aPoints.end());
    return ans;
}

// SC: O(V+2E)
// TC: O(4V) // for tree arrays and recursive stack

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}