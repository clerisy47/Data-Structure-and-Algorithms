// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/

#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
int N = 1e5 + 2;
vector<int> facto(N);

int mod_multiply(int x, int y)
{
    return (x % MOD * 1LL * y % MOD) % MOD;
}

// x <= 1e18 y <=1e9 MOD == 1e9+7
int mod_power(int x, int y)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
            ans = mod_multiply(ans, x);
        x = mod_multiply(x, x);
        y >>= 1;
    }
    return ans;
}

int mod_inverse(int x)
{
    // modulus multiplicative inverse
    return mod_power(x, MOD - 2);
}

int mod_divide(int x, int y)
{
    return mod_multiply(x, mod_inverse(y));
}

void preCompute()
{
    facto[0] = facto[1] = 1;
    for (int i = 2; i <= N - 1; i++)
    {
        facto[i] = mod_multiply(i, facto[i - 1]);
    }
}

int nPr(int n, int r)
{
    if (n < r)
        return 0;
    return mod_divide(facto[n], facto[n - r]);
}

int nCr(int n, int r)
{
    if (n < r)
        return 0;
    return mod_divide(mod_divide(facto[n], facto[r]), facto[n - r]);
}

int main()
{
    preCompute();
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        cout << nPr(n, r) << endl;
        cout << nCr(n, r) << endl;
    }
    return 0;
}