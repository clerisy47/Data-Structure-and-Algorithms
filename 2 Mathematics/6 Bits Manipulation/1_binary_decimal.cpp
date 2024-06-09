#include <bits/stdc++.h>

int binary_decimal(long n)
{
    int res = 0;
    for (int i = 0; n != 0; i++)
    {
        int rem = n % 10;
        res += rem * pow(2, i);
        n /= 10;
    }
    return res;
}
long decimal_binary(int n)
{
    long res = 0;
    for (int i = 0; n != 0; i++)
    {
        int rem = n % 2;
        res += rem * pow(10, i);
        n /= 2;
    }
    return res;
}

// in vector form

vector<int> decimal_binary_v(int n)
{
    if (n == 0)
    {
        return {0};
    }
    vector<int> res;
    for (; n != 0; n /= 2)
    {
        int rem = n % 2;
        res.push_back(rem);
    }
    reverse(res.begin(), res.end());
    return res;
}