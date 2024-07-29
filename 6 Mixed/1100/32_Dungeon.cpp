// https://codeforces.com/problemset/problem/1463/A

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, nn, nnn;
        cin >> n >> nn >> nnn;
        if ((n + nn + nnn) % 9)
        {
            cout << "NO" << endl;
        }
        else
        {
            int k = (n + nn + nnn) / 9;
            if (min({n, nn, nnn}) >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}