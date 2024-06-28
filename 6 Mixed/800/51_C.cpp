// https://codeforces.com/problemset/problem/1368/A

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int ctr = 0;
        for (; a <= n; ctr++)
        {
            if (a <= b || a + b > n)
            {
                a += b;
            }
            else
            {
                b += a;
            }
        }
        cout << ctr << endl;
    }
    return 0;
}