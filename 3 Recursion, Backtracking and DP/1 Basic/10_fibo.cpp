// 0 1 1 2 3 5 8 13

#include <bits/stdc++.h>
using namespace std;

// Basic Recursion
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

// Time Complexity O(2^n)
// Space Complexity O(n)

// Memoization
int fibonacci(int n, int memoization[]) // size of memoization = x+1
{
    if (n <= 1)
        return n;
    if (memoization[n])
    {
        return memoization[n];
    }
    return memoization[n] = (fibonacci(n - 1, memoization) + fibonacci(n - 2, memoization));
}
// Time Complexity O(n)
// Space Complexity O(2n)

// Dynamic Programming
int fibonacci(int n)
{
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
// Time Complexity O(n)
// Space Complexity O(n)

// Space Optimized Dynamic Programming
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int dp[3];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[2] = dp[1] + dp[0];
        dp[0] = dp[1];
        dp[1] = dp[2];
    }
    return dp[2];
}

// O(logn) in mathematics folder

int main()
{
    return 0;
}
