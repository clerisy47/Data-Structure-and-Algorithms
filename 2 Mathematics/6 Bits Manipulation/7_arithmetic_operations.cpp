// https://leetcode.com/problems/divide-two-integers/

#include <bits/stdc++.h>
using namespace std;

int add(int x, int y)
{
    return (x | y) + (x & y);
    // return (x ^ y) + 2 * (x & y);
}

int multiply(int x, int k) // x and 2^k
{
    return x << k;
    // if k is larger than 9 then return long long then x must be long long
}

int divide(int x, int k) // x and 2^k
{
    return x >> k; // while dividing by 2 use x << 1;
    // or if x << k returns more than integer limit then make sure x is long long and not k
}

int modulo(int x, int k) // x and 2^k
{
    return (x & ((1 << k) - 1));
}

int divideTwoInteger(int x, int y) // x / y
{
    if (x == INT_MIN && y == -1)
    {
        return INT_MAX;
    }
    int sign = x > 0 ^ y > 0 ? -1 : 1;
    long long x_cpy = abs(x), y_cpy = abs(y), ans = 0;
    while (x_cpy >= y_cpy)
    {
        long long temp = y_cpy, m = 1;
        while (temp << 1 <= x_cpy)
        {
            temp <<= 1;
            m <<= 1;
        }
        x_cpy -= temp;
        ans += m;
    }
    return sign * ans;
}
// TC: O(logn*logn) = O(log 2n) (approximately)

int main()
{

    return 0;
}