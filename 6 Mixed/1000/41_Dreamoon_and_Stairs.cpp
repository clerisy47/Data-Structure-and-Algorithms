#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define debug(...) 47
#else
#include "debug.h"
#endif
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1
#define pyes(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
constexpr int pct(int x) { return __builtin_popcountll(x); }

void solve()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 < n2)
    {
        cout << -1 << endl;
        return;
    }
    int x = 1ll * ceil(1.0 * n1 / 2);
    debug(x);
    if (x % n2 == 0)
    {
        cout << x << endl;
    }
    else
    {
        cout << x + n2 - (x % n2) << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}