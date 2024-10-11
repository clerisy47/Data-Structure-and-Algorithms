// https://codeforces.com/problemset/problem/1430/C
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << 2 << endl;
        cout << n << " " << n - 1 << endl;
        int avg = n;
        for (int i = n - 2; i >= 1; i--)
        {
            cout << i << " " << avg << endl;
            avg = (avg + i) / 2;
        }
    }
    return 0;
}