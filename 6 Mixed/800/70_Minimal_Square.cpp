// https://codeforces.com/problemset/problem/1360/A

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
        vector<int> a(2);
        cin >> a[0] >> a[1];
        sort(a.begin(), a.end());
        cout << max(a[1] * a[1], a[0] * a[0] * 4) << endl;
    }
    return 0;
}