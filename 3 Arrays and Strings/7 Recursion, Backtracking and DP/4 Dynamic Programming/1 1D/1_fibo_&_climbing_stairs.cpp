// https://leetcode.com/problems/fibonacci-number/description/
// https://leetcode.com/problems/climbing-stairs/description/

// the climbing stairs problem is also same as fibonacci series but it starts from 1 and not from 0

#include <bits/stdc++.h>
using namespace std;

// Memoization
// Top bottom appoach

int fibonacciUtil(int n, vector<int> dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int p1 = fibonacciUtil(n - 1, dp);
    int p2 = fibonacciUtil(n - 2, dp);
    return dp[n] = p1 + p2;
}

int fib(int n) 
{
    vector<int> dp(n + 1, -1); // size of dp = n+1
    return fibonacciUtil(n, dp);
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
    int dp[3];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int p1 = dp[1];
        int p2 = dp[0];
        dp[2] = p1+p2;
        dp[0] = dp[1];
        dp[1] = dp[2];
    }
    return dp[1];
}
// Time Complexity O(n)
// Space Complexity O(1)

// O(logn) in mathematics folder


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}