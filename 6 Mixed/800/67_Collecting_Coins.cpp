// https://codeforces.com/problemset/problem/1294/A

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
        int n1;
        cin >> a[0] >> a[1] >> a[2] >> n1;
        sort(a.begin(), a.end());
        n1 -= 2 * a[2] - a[0] - a[1];
        if (n1 >= 0 && n1 % 3 == 0)
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