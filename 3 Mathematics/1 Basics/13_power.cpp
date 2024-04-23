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

// recursion
double power(double x, int n)
{
    if(n==0) return 1.0;
    if (n < 0) return power(1/x, -n);
    if (n % 2 == 0) return power(x*x, n/2);
    return x*power(x,n-1);
}

// iteration
double power(double x, int n)
{
    double ans = 1.0;
    if (n < 0)
    {
        n *= -1;
        x = 1 / x;
    }
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            x = x * x;
            n /= 2;

        }
        else
        {
            ans *= x;
            n--;
        }
    }
    return ans;
}

// Time Complexity: O(logn) (Optimal)
