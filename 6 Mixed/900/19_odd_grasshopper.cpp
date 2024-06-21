// https://codeforces.com/problemset/problem/1607/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int f, n;
        cin >> f >> n;
        int sign = 1;
        if (f % 2 == 0)
        {
            sign = -1;
        }
        if (n % 4 == 0)
        {
            cout << f << endl;
        }
        else if (n % 4 == 1)
        {
            cout << f + sign * n << endl;
        }
        else if (n % 4 == 2)
        {
            cout << (f - sign) << endl;
        }
        else
        {
            cout << (f - sign - sign * n) << endl;
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     if (f % 2 == 0)
        //     {
        //         f -= i;
        //     }
        //     else
        //     {
        //         f += i;
        //     }
        // }
        // cout << f << endl;
    }
    return 0;
}