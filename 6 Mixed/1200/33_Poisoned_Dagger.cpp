// https://codeforces.com/problemset/problem/1613/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf LLONG_MAX >> 1

int util(int k, vector<int> &a, int n)
{
    int r = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        if (a[i + 1] - a[i] > k)
        {
            r += k;
        }
        else
        {
            r += a[i + 1] - a[i];
        }
    }
    return r + k;
}

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, nn;
        cin >> n >> nn;
        int r = -1;
        vector<int> a(n);
        cin >> a;
        for (int i = 0, j = 1e18; i <= j;)
        {
            int k = i + (j - i) / 2;
            int x = util(k, a, n);
            if (x >= nn)
            {
                r = k;
                j = k - 1;
            }
            else
            {
                i = k + 1;
            }
        }
        cout << r << endl;
    }
    return 0;
}