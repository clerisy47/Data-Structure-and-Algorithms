// https://codeforces.com/problemset/problem/1849/B

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

bool comp(pair<int, int> &n1, pair<int, int> &n2)
{
    if (n1.first > n2.first)
    {
        return true;
    }
    else if (n1.first < n2.first)
    {
        return false;
    }
    else
    {
        return n1.second < n2.second;
    }
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        cin >> a;
        vector<pair<int, int>> ap;
        for (int i = 0; i <= n - 1; i++)
        {
            int t = a[i] % k;
            if (t == 0)
            {
                t = k;
            }
            ap.push_back({t, i});
        }
        sort(ap.begin(), ap.end(), comp);
        vector<int> r;
        for (auto &x : ap)
        {
            r.push_back(x.second +1);
        }
        cout << r << endl;
    }
    return 0;
}