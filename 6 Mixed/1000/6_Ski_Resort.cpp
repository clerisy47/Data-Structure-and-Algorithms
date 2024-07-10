// https://codeforces.com/problemset/problem/1840/C

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

int sum(int n, int k)
{
    if (k > n)
    {
        return 0;
    }
    return (n - k + 1) * (n - k + 2) / 2;
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
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> a(n);
        cin >> a;
        int c = 0, r = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i] <= l)
            {
                c++;
            }
            else
            {
                r += sum(c, k);
                c = 0;
            }
        }
        r += sum(c, k);
        cout << r << endl;
    }
    return 0;
}