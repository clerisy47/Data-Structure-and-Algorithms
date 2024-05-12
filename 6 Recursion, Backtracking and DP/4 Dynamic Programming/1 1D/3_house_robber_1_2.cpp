#include <bits/stdc++.h>
using namespace std;

int f(int i, vector<int> &arr, vector<int> &dp)
{
    if (i == 0)
        return arr[0];
    if (i == 1)
        return max(arr[0], arr[1]);
    if (dp[i] != -1)
        return dp[i];

    // pick
    int l = arr[i] + f(i - 2, arr, dp);

    // not pick
    int r = f(i - 1, arr, dp);

    return dp[i] = max(l, r);
}

int rob(vector<int> &arr)
{
    int n = arr.size();
    vector<int> dp(n, -1);
    return f(n - 1, arr, dp);
}

int rob(vector<int> &arr)
{
    int n = arr.size();
    if(n==1) return arr[0]; 
    vector<int> dp(n);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for (int i = 2; i <= n - 1; i++)
    {
        int l = arr[i] + dp[i - 2];
        int r = dp[i - 1];
        dp[i] = max(l, r);
    }
    return dp[n - 1];
}

int rob(vector<int> &arr)
{
    int n = arr.size();
    if(n==1) return arr[0]; 
    vector<int> dp(2);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for (int i = 2; i <= n - 1; i++)
    {
        int l = arr[i] + dp[0];
        int r = dp[1];
        dp[0]=dp[1];
        dp[1]=max(l, r);
    }
    return dp[1];
}

// For house robber 2 apply same code, create 2 arrays temp1, temp2 one not containing first and another not containing the last element
// Find the max between their max rob


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}