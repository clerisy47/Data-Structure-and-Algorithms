// https://leetcode.com/problems/powx-n/

#include <bits/stdc++.h>
using namespace std;

// Brute Force
double power(double x, int n)
{
    double ans = 1.0;
    if (n < 0)
    {
        n = -n;
        x = 1 / x;
    }
    for (int i = 1; i <= n; i++)
    {
        ans *= x;
    }
    return ans;
}
// Time Complexity: O(n)

// Optimal
// Binary eEponentiation

// Recursion
double power(double x, int num)
{
    long n = num; // when n = INT_MIN, -n will overflow
    if (n == 0)
        return 1.0;
    if (n < 0)
        return power(1 / x, -n);
    if (n % 2 == 0)
        return power(x * x, n / 2);
    return x * power(x, n - 1);
}

// Iteration
double power(double x, int num)
{
    double ans = 1.0;
    long n = num;
    if (n < 0)
    {
        n *= -1;
        x = 1 / x;
    }
    for (; n > 0; n >>= 1, x = x * x) // n /= 2;
    {
        // only add to answer if its odd
        if (n & 1) //(n % 2 != 0)
        {
            ans *= x;
            // n--: no need to do this since after division (n-1)/2 = n/2  when n is odd
        }
    }
    return ans;
}

// Time Complexity: O(logn) (Optimal)
