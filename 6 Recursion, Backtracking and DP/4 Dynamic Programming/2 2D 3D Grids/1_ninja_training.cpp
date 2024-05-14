// https://www.naukri.com/code360/problems/ninja%E2%80%99s-training_3621003

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
    vector<vector<int>> dp(2, vector<int>(4));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));
    for (int i = 1; i <= n - 1; i++)
    {
        fill(dp[1].begin(), dp[1].end(), 0);

        for (int prev = 0; prev <= 3; prev++)
        {
            int maxPoints = 0;
            for (int j = 0; j <= 2; j++)
            {
                if (j != prev)
                {
                    int currPoints = points[i][j] + dp[0][j];
                    maxPoints = max(maxPoints, currPoints);
                }
            }
            dp[1][prev] = maxPoints;
        }
        dp[0]=dp[1];
    }
    return dp[n - 1][3];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}