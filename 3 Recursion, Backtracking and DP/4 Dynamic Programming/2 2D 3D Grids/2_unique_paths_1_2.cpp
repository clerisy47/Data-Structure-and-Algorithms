#include <bits/stdc++.h>
using namespace std;

// question is saying can move down right but since we're starting from n-1, we do move up and left

int f(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &obstacleGrid)
{
    // for unique paths 1 (which doesn't count for obstacle) just remove this if statement
    if (obstacleGrid[i][j])
        return 0;

    if (i == 0 && j == 0)
        return 1;

    if (dp[i][j] != -1)
        return dp[i][j];

    int up = j >= 1 ? f(i, j - 1, dp, obstacleGrid) : 0;
    int left = i >= 1 ? f(i - 1, j, dp, obstacleGrid) : 0;

    return dp[i][j] = up + left;
}

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return f(m - 1, n - 1, dp, obstacleGrid);
}

// TC: O(N*M)
// SC: O(2*N*M)

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m, vector<int>(n));
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (obstacleGrid[i][j])
                dp[i][j] = 0;
            else if (i == 0 && j == 0)
            {
                dp[0][0] = 1;
            }
            else
            {
                int up = j >= 1 ? dp[i][j - 1] : 0;
                int left = i >= 1 ? dp[i - 1][j] : 0;
                dp[i][j] = up + left;
            }
        }
    }
    return dp[m - 1][n - 1];
}
// TC: O(N*M)
// SC: O(N*M)

// TODO: Space Optimization

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}