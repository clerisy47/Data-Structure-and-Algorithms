// https://codeforces.com/problemset/problem/1097/B

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

bool util(int i, vector<int> &a, int sum)
{
    if (i < 0)
    {
        return sum % 360 == 0;
    }
    bool p1 = util(i - 1, a, sum - a[i]);
    bool p2 = util(i - 1, a, sum + a[i]);
    return p1 || p2;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    {
        int n;
        cin >> n;
        vector<int> a(n);
        cin >> a;
        if (util(n - 1, a, 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}