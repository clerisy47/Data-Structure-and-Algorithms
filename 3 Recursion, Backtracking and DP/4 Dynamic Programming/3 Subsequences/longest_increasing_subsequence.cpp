#include <bits/stdc++.h>
using namespace std;

int f(int i, int prev, vector<int> &arr, vector<vector<int>> &dp)
{
    if (i == arr.size())
        return 0;
    if(dp[i][prev+1]!=-1){  // normalizing as -1 doesn't exist
        return dp[i][prev+1];
    }
    // take
    int l = prev == -1 || arr[i] > arr[prev] ? 1 + f(i + 1, i, arr, dp) : 0;
    // not take
    int r = f(i + 1, prev, arr, dp);
    return dp[i][prev+1]=max(l, r);
}
int lengthOfLIS(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1)); // one extra to store -1
    return f(0, -1, arr, dp);
}

// TC: O(N*N)
// SC: O(N*(N+1)) + O(N)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}