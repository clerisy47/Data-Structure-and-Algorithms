#include <bits/stdc++.h>
using namespace std;

int f(int i, int prev, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if (dp[i][prev] != -1)
    {
        return dp[i][prev];
    }
    if (i == 0)
    {
        int maxPoints = 0;
        for (int j = 0; j <= 2; j++)
        {
            if (j != prev)
            {
                maxPoints = max(maxPoints, points[0][j]);
            }
        }
        return maxPoints;
    }
    int maxPoints = 0;
    for (int j = 0; j <= 2; j++)
    {
        if (j != prev)
        {
            int currPoints = points[i][j] + f(i - 1, j, points, dp);
            maxPoints = max(maxPoints, currPoints);
        }
    }
    return dp[i][prev] = maxPoints;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4, -1)); // 4 to store 0, 1, 2 and 3 (at start with no prev)
    return f(n - 1, 3, points, dp);
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));
    for (int i = 1; i <= n - 1; i++)
    {
        for (int prev = 0; prev <= 3; prev++)
        {
            int maxPoints = 0;
            for (int j = 0; j <= 2; j++)
            {
                if (j != prev)
                {
                    int currPoints = points[i][j] + dp[i - 1][j];
                    maxPoints = max(maxPoints, currPoints);
                }
            }
            dp[i][prev] = maxPoints;
        }
    }
    return dp[n - 1][3];
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<int> dp(4); // 1x4 nested vector == 4 vector
    dp[0] = max(points[0][1], points[0][2]);
    dp[1] = max(points[0][0], points[0][2]);
    dp[2] = max(points[0][0], points[0][1]);
    dp[3] = max(points[0][0], max(points[0][1], points[0][2]));
    for (int i = 1; i <= n - 1; i++)
    {
        vector<int> maxPoints(4, 0);
        for (int prev = 0; prev <= 3; prev++)
        {
            maxPoints[prev] = 0;
            for (int j = 0; j <= 2; j++)
            {
                if (j != prev)
                {
                    int currPoints = points[i][j] + dp[j]; // since here dp[j] is used it becomes modified at each loop so that it should be recorded in separate array
                    maxPoints[prev] = max(maxPoints[prev], currPoints);
                }
            }
        }
        dp = maxPoints;
    }
    return dp[3];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}