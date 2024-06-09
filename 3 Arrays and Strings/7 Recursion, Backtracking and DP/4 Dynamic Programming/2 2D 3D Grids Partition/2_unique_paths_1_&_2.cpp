// https://leetcode.com/problems/unique-paths/description/
// https://leetcode.com/problems/unique-paths/description/

#include <bits/stdc++.h>
using namespace std;

// question is saying can move down right but since we're starting from n-1, we do move up and left

int util(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &obstacleGrid)
{
    // for unique paths 1 (which doesn't count for obstacle) just remove this if statement
    if (obstacleGrid[i][j])
        return 0;

    if (i == 0 && j == 0)
        return 1;

    if (dp[i][j] != -1)
        return dp[i][j];

    int up = j >= 1 ? util(i, j - 1, dp, obstacleGrid) : 0;
    int left = i >= 1 ? util(i - 1, j, dp, obstacleGrid) : 0;

    return dp[i][j] = up + left;
}

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return util(m - 1, n - 1, dp, obstacleGrid);
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
            {
                dp[i][j] = 0;
                continue;
            }
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1; // writing dp[i][j] instead of dp[0][0] as we should replace i with 1 later and not with 0
                continue;
            }
            int up = j >= 1 ? dp[i][j - 1] : 0;
            int left = i >= 1 ? dp[i - 1][j] : 0;
            dp[i][j] = up + left;
        }
    }
    return dp[m - 1][n - 1];
}
// TC: O(N*M)
// SC: O(N*M)

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(2, vector<int>(n));
    for (int i = 0; i <= m - 1; i++)
    {
        fill(dp[1].begin(), dp[1].end(), 0); // need to fill with zeroes as the base condition has 0 index related to it

        for (int j = 0; j <= n - 1; j++)
        {
            if (obstacleGrid[i][j]) // for unique path 1 just remove this
            {
                dp[1][j] = 0;
                continue;
            }
            if (i == 0 && j == 0)
            {
                dp[1][j] = 1;
                continue;
            }

            int up = j >= 1 ? dp[1][j - 1] : 0;
            int left = i >= 1 ? dp[0][j] : 0;
            dp[1][j] = up + left;
        }
        dp[0] = dp[1];
    }
    return dp[0][n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}