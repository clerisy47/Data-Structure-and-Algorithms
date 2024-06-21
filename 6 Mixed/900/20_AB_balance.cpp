// https://codeforces.com/problemset/problem/1606/A

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
        string a;
        cin >> a;
        a[0] = a[a.size() - 1];
        cout << a << endl;
    }
    return 0;
}