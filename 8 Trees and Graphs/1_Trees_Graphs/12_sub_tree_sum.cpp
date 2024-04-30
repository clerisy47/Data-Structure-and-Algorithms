#include<bits/stdc++.h>
using namespace std;

void dfs(int vertex, int parent, vector<vector<int>> &graph, vector<int> &preSum)
{
    preSum[vertex]+=vertex;
    for (auto child : graph[vertex])
    {
        if (child != parent)
        {
            dfs(child, vertex, graph, preSum);
            preSum[vertex]+=preSum[child];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2;
    cin >> n;
    m=n-1;
    vector<vector<int>> graph(n+1);
    for (int i = 0; i <= m - 1; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    vector<int> preSum(n+1);
    dfs(1, 0, graph, preSum);
    for (int i=1;i<=n;i++){
        cout<<preSum[i]<<endl;
    }

    return 0;
}