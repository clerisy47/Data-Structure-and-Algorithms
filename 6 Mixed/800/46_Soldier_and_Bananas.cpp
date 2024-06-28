// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    {
        int k, n, w;
        cin >> k >> n >> w;
        int cost = k * w * (w + 1) / 2;
        if (n >= cost)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << cost - n << endl;
        }
    }
    return 0;
}