// https://codeforces.com/problemset/problem/1543/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

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
        if (n1 == n2)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        int ans1 = abs(n1 - n2);
        int ans2 = min({n1 % ans1, ans1 - n1 % ans1});
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}