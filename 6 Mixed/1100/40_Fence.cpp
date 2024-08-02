// https://codeforces.com/problemset/problem/363/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

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
    {
        int n, nn;
        cin >> n >> nn;
        vector<int> a(n);
        cin >> a;
        int c = 0;
        for (int i = 0; i <= nn - 1; i++)
        {
            c += a[i];
        }
        int minC = c, r = 0;
        for (int i = 1, j = nn; j <= n - 1; i++, j++)
        {
            c += a[j];
            c -= a[i - 1];
            if (c < minC)
            {
                r = i;
                minC = c;
            }
        }
        cout << r + 1 << endl;
    }
    return 0;
}