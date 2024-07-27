// https://codeforces.com/problemset/problem/1141/A

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
    int n, nn;
    cin >> n >> nn;
    if (nn % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    n = nn / n;
    int ctr = 0;
    for (; n > 1, n % 2 == 0; ctr++, n /= 2)
    {
    }
    for (; n > 1, n % 3 == 0; ctr++, n /= 3)
    {
    }
    if (n != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ctr << endl;
    }
    return 0;
}