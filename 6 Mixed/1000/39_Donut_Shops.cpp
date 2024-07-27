// https://codeforces.com/problemset/problem/1373/A

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
        if (n >= nnn)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
        if (nnn >= n * nn)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << nn << endl;
        }
    }
    return 0;
}