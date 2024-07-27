// https://codeforces.com/contest/139/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
    for (auto &elem : vec)
    {
        is >> elem;
    }
    return is;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int tc;
    // cin >> tc;
    // while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(7);
        cin >> a;
        int i;
        for (i = 0; n > 0; n -= a[i % 7], i++)
        {
        }
        int r = i % 7;
        if (r == 0)
        {
            r = 7;
        }
        cout << r << endl;
    }
    return 0;
}