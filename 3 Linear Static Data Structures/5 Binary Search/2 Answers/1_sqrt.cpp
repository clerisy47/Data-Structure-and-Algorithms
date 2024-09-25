// https://leetcode.com/problems/sqrtx/

#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    int n = INT_MAX, r = -1;
    for (int i = 0, j = n; i <= j;)
    {
        long long k = i + (j - i) / 2;
        if (k * k <= x)
        {
            r = k;
            i = k + 1;
        }
        else
        {
            j = k - 1;
        }
    }
    return r;
}

int main()
{
    return 0;
}