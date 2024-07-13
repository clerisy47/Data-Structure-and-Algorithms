// https://codeforces.com/problemset/problem/1744/C

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
        string s;
        char ss;
        cin >> n >> ss >> s;

        s += s;
        vector<int> a(2 * n);
        int c = 2 * n;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                c = i;
                a[i] = 0;
            }
            else
            {
                a[i] = c - i;
            }
        }
        int r = 0;
        for (int i = 0; i <= s.size() - 1; i++)
        {
            if (s[i] == ss)
            {
                r = max(r, a[i]);
            }
        }
        cout << r << endl;
    }
    return 0;
}