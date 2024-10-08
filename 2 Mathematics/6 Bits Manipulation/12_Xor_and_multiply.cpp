// https://www.codechef.com/problems/XORMUL

// Given n, a, b. Find c such that (a ^ c) * (b ^ c) is maximized.
// Note that 0 < a, b, c < pow(2, n) ie number of bits of c  <= maximum number of bits out of a and b


#include <bits/stdc++.h>
using namespace std;
#define int long long

int xor_and_multiply(int n, int o, int p)
{
    bitset<32> a(o), b(p), c;
    for (int i = 0; i < n; i++)
    {
        if (a[i] && b[i])
        {
            c[i] = 0;
        }
        else if (!a[i] && !b[i])
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 1;
            int t = (a ^ c).to_ulong() * (b ^ c).to_ulong();
            c[i] = 0;
            int t1 = (a ^ c).to_ulong() * (b ^ c).to_ulong();
            c[i] = (t > t1) ? 1 : 0;
        }
    }
    return c.to_ulong();
}