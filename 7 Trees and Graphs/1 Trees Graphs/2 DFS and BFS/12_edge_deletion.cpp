// delete edge, dividing tree into 2 trees such that the product of sum of their nodes is maximum

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
    int max_product=1;
    for (int i=2;i<=n;i++){ // don't start at head as we can't divide into 2 parts from cutting at head
        int sub_tree_1 = preSum[i];
        int sub_tree_2 = preSum[1] - sub_tree_1;
        int curr_product = sub_tree_1*sub_tree_2;
        if(curr_product>max_product) max_product=curr_product;
    }
    cout<<max_product;

    return 0;
}