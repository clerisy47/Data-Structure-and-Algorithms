// https://codeforces.com/problemset/problem/1391/B

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
        int n1, n2;
        string s1;
        cin >> n1 >> n2;
        int r = 0;
        for (int i = 0; i <= n1 - 1; i++)
        {
            cin >> s1;
            if (s1[n2 - 1] == 'R')
            {
                r++;
            }
        }
        for (int i = 0; i <= n2 - 1; i++)
        {
            if (s1[i] == 'D')
            {
                r++;
            }
        }
        cout << r << endl;
    }
    return 0;
}