// https://codeforces.com/problemset/problem/1831/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1

template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
    for (auto &elem : vec)
    {
        is >> elem;
    }
    return is;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (const auto &elem : vec)
    {
        os << elem << " ";
    }
    return os;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        cin >> a >> b;
        vector<int> c(2 * n + 1), d(2 * n + 1);
        for (auto &x : a)
        {
            c[x] = 1;
        }
        for (auto &x : b)
        {
            d[x] = 1;
        }
        for (int i = 1; i <= n - 1; i++)
        {
            int ctr = 1;
            for (; i <= n - 1 && a[i] == a[i - 1]; i++)
            {
                ctr++;
                c[a[i]] = max(c[a[i]], ctr);
            }
        }
        // cout << c << endl;
        for (int i = 1; i <= n - 1; i++)
        {
            int ctr = 1;
            for (; i <= n - 1 && b[i] == b[i - 1]; i++)
            {
                ctr++;
                d[b[i]] = max(d[b[i]], ctr);
            }
        }
        // cout << d << endl;
        for (int i = 0; i <= 2 * n; i++)
        {
            c[i] += d[i];
        }
        cout << *max_element(c.begin(), c.end()) << endl;
    }
    return 0;
}