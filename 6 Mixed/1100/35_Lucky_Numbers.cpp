// https://codeforces.com/problemset/problem/630/C
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define INF LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    {
        int n;
        cin >> n;
        int nn = 2, r = 0;
        for (int i = 1; i <= n; r += nn, nn *= 2, i++)
        {
        }
        cout << r << endl;
    }
    return 0;
}