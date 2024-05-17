// https://leetcode.com/problems/longest-increasing-subsequence/description/

#include <bits/stdc++.h>
using namespace std;

int f(int i, int prev, vector<int> &arr, vector<vector<int>> &dp)
{
    if (i == arr.size())
        return 0;
    if (dp[i][prev + 1] != -1)
    { // normalizing as -1 doesn't exist
        return dp[i][prev + 1];
    }
    // take
    int p1 = (prev == -1 || arr[i] > arr[prev]) ? 1 + f(i + 1, i, arr, dp) : 0;
    // not take
    int p2 = f(i + 1, prev, arr, dp);
    return dp[i][prev + 1] = max(p1, p2);
}
int lengthOfLIS(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1)); // one extra to store -1
    return f(0, -1, arr, dp);
}

// TC: O(N^2)
// SC: O(N*(N+1)) + O(N)

int lengthOfLIS(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for (int i = n; i >= 0; i--)
    {
        for (int prev = i - 1; prev >= -1; prev--)
        {
            if (i == n)
            {
                dp[i][prev + 1] = 0; // no need to do this as dp is by default initialized as zeroes
            }
            else
            {
                int p1 = (prev == -1 || arr[i] > arr[prev]) ? 1 + dp[i + 1][i + 1] : 0; // second index is normalized hence i becomes i+1
                int p2 = dp[i + 1][prev + 1];
                dp[i][prev + 1] = max(p1, p2);
            }
        };
    }
    return dp[0][0]; // -1 is normalized to 0
}
// TC: O(N^2)
// SC: O((N+1)^2)

int lengthOfLIS(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> dp(2, vector<int>(n + 1));
    for (int i = n; i >= 0; i--)
    {
        for (int prev = i - 1; prev >= -1; prev--)
        {
            if (i == n)
            {
                dp[0][prev + 1] = 0; // no need to do this as dp is by default initialized as zeroes
            }
            else
            {
                int p1 = (prev == -1 || arr[i] > arr[prev]) ? 1 + dp[1][i + 1] : 0; // second index is normalized hence i becomes i+1
                int p2 = dp[1][prev + 1];
                dp[0][prev + 1] = max(p1, p2);
            }
        }
        dp[0] = dp[1];
    }
    return dp[0][0]; // -1 is normalized to 0
}
// TC: O(N^2)
// SC: O((2)*(N+1))

// modified dp (like prefix algorithms)
int lengthOfLIS(vector<int> &arr)
{
    int n = arr.size();
    vector<int> dp(n, 1);
    int maxEle = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int prev = 0; prev <= i - 1; prev++)
        {
            if (arr[prev] < arr[i] && dp[prev] + 1 > dp[i])
            {
                dp[i] = dp[prev] + 1;
            }
        }
        maxEle = max(maxEle, dp[i]);
    }
    return maxEle;
}
// TC: O(N^2)
// SC: O(1)

// Most optimal approach in binary search folder

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}