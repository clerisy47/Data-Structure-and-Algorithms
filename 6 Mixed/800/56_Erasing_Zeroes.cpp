// https://codeforces.com/problemset/problem/1303/A

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
        string s1;
        cin >> s1;
        int l = -1, r = -1;
        for (int i = 0; i <= s1.size() - 1; i++)
        {
            if (s1[i] == '1')
            {
                l = i;
                break;
            }
        }
        for (int i = s1.size() - 1; i >= 0; i--)
        {
            if (s1[i] == '1')
            {
                r = i;
                break;
            }
        }
        int ans = 0;
        if (l == -1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = l; i <= r; i++)
        {
            if (s1[i] == '0')
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}