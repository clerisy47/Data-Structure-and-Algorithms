// https://codeforces.com/problemset/problem/1366/B

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
#define inf LLONG_MAX >> 2
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define gcd(num1, num2) (__gcd(num1, num2))
#define lcm(num1, num2) ((num1) * (num2) / __gcd((num1), (num2)))
#define popct(num) (__builtin_popcountll(num))
int mod = 1000000007ll;

template <typename T1, typename T2>
istream &operator>>(istream &in, vector<pair<T1, T2>> &vec)
{
    for (auto &p : vec)
        in >> p.first >> p.second;
    return in;
}

bool isIntersecting(pair<int, int> &p1, pair<int, int> &p2)
{
    return (p1.second >= p2.first) && (p1.first <= p2.second);
}

pair<int, int> unionPair(pair<int, int> &p1, pair<int, int> &p2)
{
    return {
        min(p1.first, p2.first),
        max(p1.second, p2.second),
    };
}

void solve()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<pair<int, int>> a(n3);
    cin >> a;
    pair<int, int> t1 = {n2, n2};
    for (int i = 0; i < n3; i++)
    {
        if (isIntersecting(t1, a[i]))
        {
            t1 = unionPair(t1, a[i]);
        }
    }
    cout << t1.second - t1.first + 1 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    while (tc--)
    {
        solve();
    }
    return 0;
}