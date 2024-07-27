// https://codeforces.com/problemset/problem/219/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    string s, r;
    cin >> s;
    vector<int> a(26);
    for (auto &x : s)
    {
        if (a[x - 'a'] % k == 0)
        {
            r.push_back(x);
        }
        a[x - 'a']++;
    }
    bool f = false;
    for (auto &x : r)
    {
        if (a[x - 'a'] % k != 0)
        {
            cout << -1 << endl;
            f = true;
            break;
        }
    }
    if (!f)
    {
        for (int i = 0; i <= k - 1; i++)
        {
            cout << r;
        }
    }
    cout << endl;
    return 0;
}