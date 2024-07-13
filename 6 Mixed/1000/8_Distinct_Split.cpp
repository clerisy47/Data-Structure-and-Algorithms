// https://codeforces.com/problemset/problem/1791/D

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(26), aa(26);
        for (auto &x : s)
        {
            a[x - 'a']++;
        }
        int r = 0;
        for (auto &x : s)
        {
            a[x - 'a']--;
            aa[x - 'a']++;
            int rr = 0;
            for (int i = 0; i <= 25; i++)
            {
                if (a[i] && aa[i])
                {
                    rr += 2;
                }
                else if (a[i] ^ aa[i])
                {
                    rr += 1;
                }
            }
            r = max(r, rr);
        }
        cout << r << endl;
    }
    return 0;
}