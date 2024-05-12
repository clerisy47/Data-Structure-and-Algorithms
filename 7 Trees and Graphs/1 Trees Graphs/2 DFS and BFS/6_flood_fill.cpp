#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, vector<vector<int>> &matrix)
{
    return i != -1 && j != -1 && i != matrix.size() && j != matrix[0].size();
}
// dfs on matrix (not adjacency matrix)
// difference between matrix and adjacency matrix is in matrix, each elements are nodes, in adjacency matrix each elements are weight of edges
void dfs(int i, int j, int initial_color, int final_color, vector<vector<int>> &matrix)
{
    if (!isValid(i, j, matrix))
        return;
    if (matrix[i][j] != initial_color)
        return; // because of this statement we don't need visited array
    matrix[i][j] = final_color;
    vector<pair<int, int>> operations = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    for (auto &x : operations)
    {
        dfs(i + x.first, j + x.second, initial_color, final_color, matrix);
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &matrix, int n, int m, int x, int y, int p)
{
    dfs(x, y, matrix[x][y], p, matrix);
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