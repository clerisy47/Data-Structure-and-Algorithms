// https://codeforces.com/problemset/problem/1624/B

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
        int a, b, c;
        cin >> a >> b >> c;
        int aSeries = 2 * b - c, bSeries = 0, cSeries = 2 * b - a;
        if ((a + c) % 2 == 0)
        {
            bSeries = (a + c) / 2;
        }
        // cout << cSeries << " " << aSeries<<endl;
        if ((aSeries > 0 && aSeries % a == 0) || (bSeries > 0 && bSeries % b == 0) || (cSeries > 0 && cSeries % c == 0)) // cSeries can't be 0/-ve as multiplier is positive integer
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