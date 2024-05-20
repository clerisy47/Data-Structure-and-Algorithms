// https://leetcode.com/problems/burst-balloons/submissions/1263039294/

#include <bits/stdc++.h>
using namespace std;

int util(vector<int> &arr, int i, int j, vector<vector<int>> &dp)
{
    if (i > j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int max_ele = -1e9;
    for (int k = i; k <= j; ++k)
    {
        int ans = arr[i - 1] * arr[k] * arr[j + 1] + util(arr, i, k - 1, dp) + util(arr, k + 1, j, dp);
        max_ele = max(max_ele, ans);
    }
    return dp[i][j] = max_ele;
}

int maxCoins(vector<int> &arr)
{
    int n = arr.size();
    arr.insert(arr.begin(), 1);
    arr.push_back(1);
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return util(arr, 1, n, dp);
}

int maxCoins(vector<int> &arr)
{
    int n = arr.size();
    arr.insert(arr.begin(), 1);
    arr.push_back(1);
    vector<vector<int>> dp(n + 2, vector<int>(n + 2));
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            if (i > j)
            {
                dp[i][j] = 0;
                continue;
            }
            int max_ele = -1e9;
            for (int k = i; k <= j; k++)
            {
                int ans = arr[i - 1] * arr[k] * arr[j + 1] + dp[i][k - 1] + dp[k + 1][j];
                max_ele = max(max_ele, ans);
            }
            dp[i][j] = max_ele;
        }
    }
    return dp[1][n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}