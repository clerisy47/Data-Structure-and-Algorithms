// https://leetcode.com/problems/fibonacci-number/description/
// https://leetcode.com/problems/climbing-stairs/description/

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
    int p1 = fibonacci(n - 1, dp);
    int p2 = fibonacci(n - 2, dp);
    return dp[n] = p1 + p2;
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
        int p1 = dp[i - 1]; 
        int p2 = dp[i - 2];
        dp[i] = p1 + p2;
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
        int p1 = dp[1]; 
        int p2 = dp[0];
        dp[0] = dp[1];
        dp[1] = p1 + p2;
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