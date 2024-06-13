#include <bits/stdc++.h>
using namespace std;

// Brute Force
int findXOR(int l, int r)
{
    int XOR = 0;
    for (int i = l; i <= r; i++)
    {
        XOR ^= i;
    }
    return XOR;
}

// Optimal
int xor_one_to_n(int n)
{
    int rem = n % 4;
    if (rem == 1)
        return 1;
    if (rem == 2)
        return n + 1;
    if (rem == 3)
        return 0;
    if (rem == 0)
        return n;
}
int findXOR(int l, int r)
{
    return xor_one_to_n(l - 1) ^ xor_one_to_n(r);
}

int main()
{

    return 0;
}