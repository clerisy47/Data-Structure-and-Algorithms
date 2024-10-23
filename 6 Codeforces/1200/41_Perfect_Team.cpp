#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define debug(...) 47
#else
#include "debug.h"
#endif
#define int long long
#define float long double
#define endl '\n'
#define inf LLONG_MAX >> 1
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define gcd(num1, num2) (_gcd(num1, num2))
#define lcm(num1, num2) ((num1) * (num2) / __gcd((num1), (num2)))
#define popct(num) (__builtin_popcountll(num))
int mod = 1000000007ll;

void solve()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int minx = min(n1, n2);
    int sumx = n1 + n2 + n3;

    int left = -1, right = minx+1;
    function<bool(int)> bfun = [&](int mid)
    {
        return mid * 3 <= sumx;
    };
    while (right - left > 1)
    {
        int mid = (left + right) >> 1;
        if (bfun(mid))
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << left << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        solve();
    }
    return 0;
}