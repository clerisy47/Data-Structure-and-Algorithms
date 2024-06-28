// https://codeforces.com/problemset/problem/1433/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, d, ans = 0;
        cin >> n;
        d = log10(n) + 1;
        ans += (n % 10 - 1) * 10;
        ans += d * (d + 1) / 2;
        cout << ans << endl;
    }
    return 0;
}