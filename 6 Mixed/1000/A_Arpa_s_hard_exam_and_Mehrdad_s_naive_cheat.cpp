// https://codeforces.com/problemset/problem/742/A

// print: last digit 1378^n
// 1378%10= 8, find 8^n % 10

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 10
#define endl '\n'
#define inf LLONG_MAX >> 1

int modPower1(int x, int y)
{
    int ans = 1;
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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << modPower1(1378, n);
    return 0;
}