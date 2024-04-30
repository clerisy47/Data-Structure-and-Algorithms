#include <bits/stdc++.h>
using namespace std;

// dfs on matrix
void dfs(int i, int j, int initial_color, int final_color, vector<vector<int>> &graph)
{
    if(i==-1||j==-1||i==graph.size()||j==graph[0].size()) return;
    if(graph[i][j]!=initial_color) return;  // because of this statement we don't need visited array
    graph[i][j]=final_color;
    dfs(i - 1, j, initial_color, final_color, graph);
    dfs(i, j-1, initial_color, final_color, graph);
    dfs(i + 1, j, initial_color, final_color, graph);
    dfs(i, j+1, initial_color, final_color, graph);
}
// TC: O(V+E)=O(n*m+4*n*m)=O(5 n*m)
// SC: O(V) = O(n*m)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}