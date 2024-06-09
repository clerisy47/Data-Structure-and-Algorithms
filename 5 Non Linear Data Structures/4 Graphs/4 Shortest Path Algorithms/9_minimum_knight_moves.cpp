#include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int y)
{
    return (x > -1 && x < 8 && y > -1 && y < 8);
}

int bfs(int x1, int y1, int x2, int y2)
{
    vector<vector<bool>> visited(8, vector<bool>(8));
    vector<vector<int>> distance(8, vector<int>(8, INT_MAX));
    queue<pair<int, int>> q;
    distance[x1][y1] = 0;   // distance is basically level from a vertex
    visited[x1][y1] = true; // we can avoid using visited array and just use min of two distances like dijkstra but that takes more computation
    q.push({x1, y1});
    vector<pair<int, int>> movements = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

    while (!q.empty())
    {
        int parent_x = q.front().first;
        int parent_y = q.front().second;
        q.pop();

        for (auto &movement : movements)
        {
            int child_x = movement.first + parent_x;
            int child_y = movement.second + parent_y;
            if (isValid(child_x, child_y) && !visited[child_x][child_y])
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

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--, y1--, x2--, y2--; // making 0 based indexing
        cout << bfs(x1, y1, x2, y2) << endl;
    }

    return 0;
}