// https://codeforces.com/problemset/problem/1154/A

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
    {
        vector<int> a(4);
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a.begin(), a.end());
        cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;
    }
    return 0;
}