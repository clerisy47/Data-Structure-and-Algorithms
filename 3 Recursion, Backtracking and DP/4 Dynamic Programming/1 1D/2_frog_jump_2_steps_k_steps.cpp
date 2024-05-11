// https://www.naukri.com/code360/problems/frog-jump_3621012

// Greedy doesn't work because it make look it goes to better way from a position but in may not be better overall


#include <bits/stdc++.h>
using namespace std;

// Memoization
int f(int i, vector<int> &heights, vector<int> &dp)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return abs(heights[1] - heights[0]);
    if (dp[i] != -1)
        return dp[i];
    int l = f(i - 1, heights, dp) + abs(heights[i] - heights[i - 1]);

    int r =  f(i - 2, heights, dp) + abs(heights[i] - heights[i - 2]);
    return dp[i] = min(l, r);
}

int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n, -1);
    return f(n - 1, heights, dp);
}

// Tabulation
int frogJump(int n, vector<int> &heights)
{
    if (n == 1)
        return 0;
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(heights[1] - heights[0]);
    for (int i = 1; i <= n - 1; i++)
    {
        int l = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int r = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        dp[i] = min(l, r);
    }
    return dp[n - 1];
}

// Space Optimization
int frogJump(int n, vector<int> &heights)
{
    if (n == 1)
        return 0;
    vector<int> dp(2);
    dp[0] = 0;
    dp[1] = abs(heights[1] - heights[0]);
    for (int i = 2; i <= n - 1; i++)
    {
        int l = dp[1] + abs(heights[i] - heights[i - 1]);
        int r = dp[0] + abs(heights[i] - heights[i - 2]);
        dp[0] = dp[1];
        dp[1] = min(l, r);
    }
    return dp[1];
}

// If frog can jump for k steps just replace l and r statements with for loop and find the minimum


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}