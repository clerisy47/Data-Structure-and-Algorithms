// https://codeforces.com/problemset/problem/1189/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    cin >> v;
    sort(v.begin(), v.end());
    swap(v[n - 1], v[n - 2]);
    bool f = false;
    for (int i = 0; i <= n - 1; i++)
    {
        if (v[i] >= v[(i + 1) % n] + v[(n + i - 1) % n])
        {
            f = true;
            break;
        }
    }
    if (f)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    cout << v << endl;
    return 0;
}