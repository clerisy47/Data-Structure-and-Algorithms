// https://codeforces.com/problemset/problem/1374/B

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
        int n;
        cin >> n;
        bool f = false;
        int ctr = 0;
        for (; n != 1; n /= 6, ctr++)
        {
            if (n % 3 != 0)
            {
                f = true;
                break;
            }
            if (n % 2 != 0)
            {
                n *= 2;
                ctr++;
            }
        }
        if (f)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ctr << endl;
        }
    }
    return 0;
}