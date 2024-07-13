// https://codeforces.com/problemset/problem/118/As

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<bool> v(26);
    v[0] = v[4] = v[8] = v[14] = v[20] = v[24] = true;
    {
        string s, r;
        cin >> s;
        for (auto &x : s)
        {
            if (x < 'a')
            {
                x += 'a' - 'A';
            }
            if (!(v[x - 'a']))
            {
                r.push_back('.');
                r.push_back(x);
            }
        }
        cout << r << endl;
    }
    return 0;
}