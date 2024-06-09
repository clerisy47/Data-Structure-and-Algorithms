#include<bits/stdc++.h>
using namespace std;

// directly using dfs is efficient

void dfs(int parent, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &output)
{
    visited[parent] = true;
    for (auto child : graph[parent])
    {
        if (!visited[child])
        {

            dfs(child, graph, visited, output);
        }
    }
    output.push_back(parent); // we need to do post order transversal ie push parent after pushing children as they will be sorted after reversing later

}

vector<int> topoSort(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> output;
    for (int vertex = 0; vertex <= n - 1; vertex++)
    {
        if (!visited[vertex])
        {
            dfs(vertex, graph, visited, output);
        }
    }
    reverse(output.begin(), output.end());
    return output;
}

bool isCyclic(vector<vector<int>>  & graph) {
// it can't detect self loop ie node that is connected to itself, might need modification
  int n = graph.size();
  vector<int>  toposorted = topoSort(graph);
  return toposorted.size()!= n; // this can be optimized without using array just by using ctr, it can be done
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}