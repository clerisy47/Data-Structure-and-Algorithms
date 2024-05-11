#include <bits/stdc++.h>
using namespace std;

// Memoization
// Top bottom appoach
int fibonacci(int n, int dp[]) // size of dp = x+1
{
    if (n <= 1)
        return n;
    if (dp[n]!=-1)
    {
        return dp[n];
    }
    int l = fibonacci(n - 1, dp);
    int r = fibonacci(n - 2, dp);
    return dp[n] = l + r;
}
// Time Complexity O(n)
// Space Complexity O(2n)

// Tabulation
// Bottom top approach
int fibonacci(int n)
{
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int first = dp[i - 1]; 
        int second = dp[i - 2];
        dp[i] = first + second;
    }
    return dp[n];
}
// Time Complexity O(n)
// Space Complexity O(n)

// Space Optimized Tabulation
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int dp[2];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int first = dp[1]; 
        int second = dp[0];
        dp[0] = dp[1];
        dp[1] = first + second;
    }
    return dp[1];
}
// Time Complexity O(n)
// Space Complexity O(1)

// O(logn) in mathematics folder

// the climbining stairs problem is also same as fibonacci series but it starts from 1 and not from 0


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}