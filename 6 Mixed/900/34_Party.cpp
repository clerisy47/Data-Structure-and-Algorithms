// https://codeforces.com/problemset/problem/115/A

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

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (const auto &elem : vec)
    {
        os << elem << " ";
    }
    return os;
}

int dfs(int i, vector<int> &v)
{
    if (v[i] == -1)
    {
        return 0;
    }
    return dfs(v[i] - 1, v) + 1;
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
        vector<int> v(n);
        cin >> v;
        set<int> s;
        for (int i = 0; i <= n - 1; i++)
        {
            s.insert(dfs(i, v));
        }
        cout << s.size() << endl;
    }
    return 0;
}