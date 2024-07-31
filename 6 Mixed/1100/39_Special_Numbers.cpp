// https://codeforces.com/problemset/problem/1594/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

int modMultiply2(int x, int y)
{
    int ans = 0;
    while (y)
    {
        if (y & 1)
            ans = (ans + x) % mod;
        x = (x + x) % mod;
        y >>= 1;
    }
    return ans;
}

int modPower2(int x, int y)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = modMultiply2(ans, x);
        }
        x = modMultiply2(x, x);
        y >>= 1;
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, nn;
        cin >> n >> nn;
        int r = 0;
        for (int i = nn, j = 0; i != 0; i >>= 1ll, j++)
        {
            r += (i & 1ll) * (long long)modPower2(n, j);
            r %= mod;
        }
        cout << r << endl;
    }
    return 0;
}