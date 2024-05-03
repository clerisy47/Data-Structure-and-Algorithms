// https://www.codechef.com/SNCKPB17/problems/SNSOCIAL/

#include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int y, int n, int m)
{
    return (x > -1 && x < n && y > -1 && y < m);
}

// multisource bfs
int bfs(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m));
    vector<vector<int>> distance(n, vector<int>(m, INT_MAX));
    int max_dist = 0;
    int max_ele = 0;
    for (auto &it1 : matrix)
    {
        for (auto &it2 : it1)
        {
            if (it2 > max_ele)
                max_ele = it2;
        }
    }

    // the main change from singlesource bfs
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (matrix[i][j] == max_ele) // pushing multiple elements
            {
                q.push({i, j});
                visited[i][j] = true;
                distance[i][j] = 0;
            }
        }
    }

    vector<pair<int, int>> movements = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}, {1, 1}, {1, -1}, {-1, -1}, {-1, 1}};

    while (!q.empty())
    {

        int parent_x = q.front().first;
        int parent_y = q.front().second;
        q.pop();

        for (auto &movement : movements)
        {
            int child_x = movement.first + parent_x;
            int child_y = movement.second + parent_y;
            if (isValid(child_x, child_y, n, m) && !visited[child_x][child_y])
            {
                q.push({child_x, child_y});
                visited[child_x][child_y] = true;
                distance[child_x][child_y] = distance[parent_x][parent_y] + 1;
                if (distance[child_x][child_y] > max_dist)
                    max_dist = distance[child_x][child_y];
            }
        }
    }

    return max_dist != INT_MAX ? max_dist : -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= m - 1; j++)
            {
                cin >> matrix[i][j];
            }
        }

        int distance = bfs(matrix);
        cout << distance << endl;
    }
    return 0;
}