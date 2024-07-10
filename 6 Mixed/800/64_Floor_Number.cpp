// https://codeforces.com/problemset/problem/1426/A

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
        if (n1 <= 2)
        {
            cout << 1 << endl;
            continue;
        }
        n1 -= 2;
        int r = ceil(1.0 * n1 / n2) + 1;
        cout << r << endl;
    }
    return 0;
}