// https://codeforces.com/problemset/problem/1385/A

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
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());
        if (a[1] == a[2])
        {
            cout << "YES" << endl;
            cout << a[0] << " " << a[2] << " " << 1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}