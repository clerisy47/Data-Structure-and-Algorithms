// https://www.naukri.com/code360/problems/matrix-chain-multiplication_975344

#include <bits/stdc++.h>
using namespace std;

int util(int i, int j, vector<int> &arr, vector<vector<int>> &dp)
{
    if (i == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int min_ele = 1e9;
    for (int k = i; k <= j - 1; k++)
    {
        int ans = arr[i - 1] * arr[k] * arr[j] + util(i, k, arr, dp) + util(k + 1, j, arr, dp);
        min_ele = min(min_ele, ans);
    }
    return dp[i][j] = min_ele;
}

int matrixMultiplication(vector<int> &arr, int n)
{
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return util(1, n - 1, arr, dp);
}

int matrixMultiplication(vector<int> &arr, int n)
{
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j <= n - 1; j++) // j is always right to i so, we take loop from j=i
        {
            if (i == j)
            {
                dp[i][j] = 0;
                continue;
            }
            int min_ele = 1e9;
            for (int k = i; k <= j - 1; k++)
            {
                int ans = arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j];
                min_ele = min(min_ele, ans);
            }
            dp[i][j] = min_ele;
        }
    }
    return dp[1][n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}