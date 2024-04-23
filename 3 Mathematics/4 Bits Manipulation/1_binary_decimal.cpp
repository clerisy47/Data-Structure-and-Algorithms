#include <bits/stdc++.h>

int binary_decimal(long n)
{
    int result = 0;
    for (int i = 0; n != 0; i++)
    {
        int rem = n % 10;
        result += rem * pow(2, i);
        n /= 10;
    }
}
long decimal_binary(int n)
{
    long result = 0;
    for (int i = 0; n != 0; i++)
    {
        int rem = n % 2;
        result += rem * pow(10, i);
        n /= 2;
    }
}