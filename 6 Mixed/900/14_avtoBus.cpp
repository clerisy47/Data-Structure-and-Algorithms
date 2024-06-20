// https://codeforces.com/problemset/problem/1679/A

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
        int n;
        cin >> n;
        if (n % 2 == 1 || n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        int minCtr = 0, maxCtr = 0;
        minCtr = n / 6;
        maxCtr += n / 4;
        if (n % 6 == 0)
        {
        }
        else
        {
            minCtr++; // either just adding 6 and last 4 or 6 and last 2 4s
        }

        // or simply ceil(n/6) and floor(n/4)

        cout << minCtr << " " << maxCtr << endl;
    }
    return 0;
}
