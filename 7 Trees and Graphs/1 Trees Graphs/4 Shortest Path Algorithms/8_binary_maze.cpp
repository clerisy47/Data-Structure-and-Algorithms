#include <bits/stdc++.h>
using namespace std;

bool isValid(int x1, int y1, vector<vector<int>> &matrix)
{
    return x1 != -1 && y1 != -1 && x1 != matrix.size() && y1 != matrix[0].size();
}
int bfs(int x1, int y1, int x2, int y2, vector<vector<int>> &matrix)
{
    vector<pair<int, int>> operations = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    if (matrix[x1][y1] == 0) // invalid initial position
        return -1;

    vector<vector<int>> distance(matrix.size(), vector<int>(matrix[0].size(), INT_MAX));
    vector<vector<int>> visited(matrix.size(), vector<int>(matrix[0].size(), 0));
    distance[x1][y1] = 0;
    queue<pair<int, int>> q;
    q.push({x1, y1});
    while (!q.empty())
    {
        int parent_x = q.front().first;
        int parent_y = q.front().second;
        q.pop();
        for (auto &operation : operations)
        {

            int child_x = parent_x + operation.first;
            int child_y = parent_y + operation.second;
            if (isValid(child_x, child_y, matrix) && !visited[child_x][child_y] && matrix[child_x][child_y] == 1)
            {
                q.push({child_x, child_y});
                visited[child_x][child_y] = true;
                distance[child_x][child_y] = distance[parent_x][parent_y] + 1;
            }
        }
        if (distance[x2][y2] != INT_MAX)
            return distance[x2][y2];
    }

    return -1;
}

vector<vector<int>> shortestPath(vector<vector<int>> &matrix, int n, int m, int x, int y, int p)
{
    return matrix;
}
// TC: O(V+E)=O(n*m+4*n*m)=O(5 n*m)
// SC: O(V) = O(n*m)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}