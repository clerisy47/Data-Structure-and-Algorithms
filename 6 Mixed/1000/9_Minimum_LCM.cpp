// https://codeforces.com/problemset/problem/1765/M

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

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
        int r = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                r = i;
                break;
            }
        }
        if (!r || n == 2)
        {
            cout << 1 << " " << n - 1 << endl;
        }
        else
        {
            cout << n / r << " " << n - n / r << endl;
        }
    }
    return 0;
}