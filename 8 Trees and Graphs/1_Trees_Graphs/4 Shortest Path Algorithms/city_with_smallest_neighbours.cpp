#include <bits/stdc++.h>
using namespace std;

void floydWashal(vector<vector<int>> &graph)
{
    int n = graph.size();

    for (int k = 0; k <= n - 1; k++)
    {
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                if (graph[i][k] != INT_MAX && graph[k][j] != INT_MAX)
                {
                    int new_distance = graph[i][k] + graph[k][j];
                    if (new_distance < graph[i][j])
                    {
                        graph[i][j] = new_distance;
                    }
                }
            }
        }
    }
}

int findTheCity(int n, vector<vector<int>> &edges, int threshold)
{
    vector<vector<int>> graph(n, vector<int>(n, INT_MAX));

    for (auto &it : edges)
    {
        graph[it[0]][it[1]] = it[2];
        graph[it[1]][it[0]] = it[2];
    }
    for (int i = 0; i <= n - 1; i++)
        graph[i][i] = 0;
    floydWashal(graph);
    int min_ctr = n + 1;
    int min_vertex = -1;

    for (int parent = 0; parent <= n - 1; parent++)
    {
        int ctr = 0;
        for (int children = 0; children <= n - 1; children++)
        {
            if (graph[parent][children] <= threshold)
                ctr++;
        }

        if (ctr <= min_ctr) // less than or equal to because "if multiple such cities exist, you have to find the city with the greatest number"

        {
            min_ctr = ctr;
            min_vertex = parent;
        }
    }
    return min_vertex;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
