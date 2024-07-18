// https://leetcode.com/problems/super-pow/description/

// euler's totient function Φ(n) of a number n is the number of coprimes from 1 to n
// Φ(n)=  n* ∏(1-1/p) where p is prime factor of n
// a^b %m can be written as a^(b%Φ(n)) %m for prime m
// for 1337, its prime factors are 7 and 191 so Φ(n) = 1140

#include <bits/stdc++.h>
using namespace std;

long long mod = 1337;

long long modPower(long long x, long long y)
{
    long long ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = ans * x % mod;
        }
        x = x * x % mod;
        y >>= 1;
    }
    return ans;
}

int superPow(int a, vector<int> &b)
{

    long long b_int = 0;
    long long n = b.size();
    for (long long i = 0; i <= n - 1; i++)
    {
        b_int = (b_int * 10) % 1140;
        b_int = (b_int + b[i]) % 1140;
    }
    if (b_int == 0)
        b_int += 1140; // edge case when b_int is 0
    return modPower(a, b_int);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}