#include <bits/stdc++.h>
using namespace std;

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
// Time Complexity: O(n) (Not optimal)

double power_optimial(double x, int n)
{
    double ans = 1.0;
    if (n < 0)
    {
        n *= -1;
        x = 1 / x;
    }
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            ans = ans * x;
            n = n - 1;
        }
        else
        {
            x = x * x;
            n /= 2;
        }
    }
    return ans;
}

// Time Complexity: O(logn) (Optimal)
