// https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define debug(...) 47
#else
#include "debug.h"
#endif
#define int long long
#define float long double
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define cinv(v, n)                    \
    do                                \
    {                                 \
        (v).resize(n);                \
        for (int i = 0; i < (n); ++i) \
            cin >> (v)[i];            \
    } while (0)
#define coutv(v)                     \
    do                               \
    {                                \
        for (const auto &elem : (v)) \
            cout << elem << " ";     \
        cout << endl;                \
    } while (0)
#define cin2d(v, rows, cols)                 \
    do                                       \
    {                                        \
        (v).resize(rows, vector<int>(cols)); \
        for (int i = 0; i < (rows); ++i)     \
            for (int j = 0; j < (cols); ++j) \
                cin >> (v)[i][j];            \
    } while (0)
#define cout2d(v)                        \
    do                                   \
    {                                    \
        for (const auto &row : (v))      \
        {                                \
            for (const auto &elem : row) \
                cout << elem << " ";     \
            cout << endl;                \
        }                                \
    } while (0)
constexpr int pctr(int x) { return __builtin_popcountll(x); }

void solve()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a;
    cinv(a, n1 - 1);
    bool f = false;
    a.push_back(7);
    for (int i = 0; i <= n1 - 1; i += a[i])
    {
        if (i == n2 - 1)
        {
            f = true;
            break;
        }
    }
    coutb(f);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}