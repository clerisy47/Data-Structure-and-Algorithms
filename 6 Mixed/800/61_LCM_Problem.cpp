// https://codeforces.com/problemset/problem/1389/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        // int r1, r2;
        // int lcm = gcd(r1, r2) / (r1 * r2);
        if (2 * n1 > n2)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << n1 << " " << 2 * n1 << endl;
        }
    }
    return 0;
}