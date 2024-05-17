// https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
// https://leetcode.com/problems/partition-equal-subset-sum/

#include <bits/stdc++.h>
using namespace std;
bool generate(int i, vector<int> &arr, int k, vector<vector<int>> &dp)
{
    if (k == 0)
    {
        return true;
    }
    if (k < 0)
    {
        return false;
    }
    if (i == 0)
    {
        return arr[0] == k;
    }
    if (dp[i][k] != -1)
    {
        return dp[i][k];
    }

    bool p1 = generate(i - 1, arr, k - arr[i], dp);
    bool p2 = generate(i - 1, arr, k, dp);

    return dp[i][k] = p1 || p2;
}

bool isSubsetSum(vector<int> &arr, int k)
{
    vector<vector<int>> dp(arr.size(), vector<int>(k + 1, -1));
    return generate(arr.size() - 1, arr, k, dp);
}

bool isSubsetSum(vector<int> &arr, int k)
{
    vector<vector<bool>> dp(arr.size(), vector<bool>(k + 1));
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        for (int j = 0; j <= k; j++)
        {

            if (j == 0)
            {
                dp[i][j] = true;
                continue;
            }
            if (i == 0)
            {
                dp[i][j] = arr[0] == j;
                continue;
            }
            bool p1 = j - arr[i] >= 0 ? dp[i - 1][j - arr[i]] : false;
            bool p2 = dp[i - 1][j];

            dp[i][j] = p1 || p2;
        }
    }
    return dp[arr.size() - 1][k];
}

bool isSubsetSum(vector<int> &arr, int k)
{
    vector<vector<bool>> dp(2, vector<bool>(k + 1));
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        fill(dp[1].begin(), dp[1].end(), false);
        for (int j = 0; j <= k; j++)
        {

            if (j == 0)
            {
                dp[1][0] = true;
                continue;
            }
            if (i == 0)
            {
                dp[1][j] = arr[0] == j;
                continue;
            }
            bool p1 = j - arr[i] >= 0 ? dp[0][j - arr[i]] : false;
            bool p2 = dp[0][j];

            dp[1][j] = p1 || p2;
        }
        dp[0] = dp[1];
    }
    return dp[0][k];
}

// if half of total sum is found it can be partitioned
bool canPartition(vector<int> &arr)
{
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum % 2 == 1) // this statement is must or else function will loop for floor(sum/2) and may find it
        return false;
    return isSubsetSum(arr, sum / 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}