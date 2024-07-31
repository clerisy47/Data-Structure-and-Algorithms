// https://www.hackerrank.com/contests/ieeextreme-challenges/challenges/magic-square

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

template <typename T>
istream &operator>>(istream &is, vector<vector<T>> &vec)
{
    for (auto &subVec : vec)
    {
        for (auto &elem : subVec)
        {
            is >> elem;
        }
    }
    return is;
}

bool comp(int n1, int n2)
{
    return n1 > n2;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        cin >> a;
        int k = 0;
        int sum;
        vector<int> r;
        for (int i = 0; i <= n - 1; i++)
        {
            k += a[i][i];
        }
        for (int i = 0; i <= n - 1; i++)
        {
            sum = accumulate(a[i].begin(), a[i].end(), 0ll);
            if (sum != k)
            {
                r.push_back(i + 1);
            }
        }
        for (int i = 0; i <= n - 1; i++)
        {
            sum = 0;
            for (int j = 0; j <= n - 1; j++)
            {
                sum += a[j][i];
            }
            if (sum != k)
            {
                r.push_back(-(i + 1));
            }
        }
        sum = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            sum += a[i][n - 1 - i];
        }
        if (sum != k)
        {
            r.push_back(0);
        }
        if (r.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(r.begin(), r.end());
            cout << r.size() << endl;
            for (auto &x : r)
            {
                cout << x << endl;
            }
        }
    }
    return 0;
}