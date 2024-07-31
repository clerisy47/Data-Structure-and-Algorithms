// https://codeforces.com/problemset/problem/463/B

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
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a;
    int nn = 0, r = a[0];
    for (int i = 1; i <= n - 1; i++)
    {
        nn += a[i-1] - a[i];

        if (nn < 0)
        {
            r += -nn;
            nn = 0;
        }
    }
    cout << r << endl;
    return 0;
}