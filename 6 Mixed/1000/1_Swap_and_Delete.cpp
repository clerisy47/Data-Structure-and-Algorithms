// https://codeforces.com/problemset/problem/1913/B

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
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (auto &x : s)
        {
            if (x == '0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        for (auto &x : s)
        {
            if (x == '0')
            {
                if (c1 == 0)
                {
                    break;
                }
                c1--;
            }
            else if (x == '1')
            {
                if (c0 == 0)
                {
                    break;
                }
                c0--;
            }
        }
        cout << c0 + c1 << endl;
    }
    return 0;
}