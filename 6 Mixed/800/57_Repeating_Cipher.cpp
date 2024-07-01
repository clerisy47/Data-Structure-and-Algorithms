// https://codeforces.com/problemset/problem/1095/A

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
        int n1;
        string s1;
        cin >> n1;
        cin >> s1;
        string ans;
        for (int i = 0, j = 1; i <= n1 - 1; i += j, j++)
        {
            ans.push_back(s1[i]);
        }
        cout << ans << endl;
    }
    return 0;
}