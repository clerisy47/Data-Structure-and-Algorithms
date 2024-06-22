// https://codeforces.com/problemset/problem/1373/B

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
        string a;
        cin >> a;
        int ctr0 = 0, ctr1 = 0;
        for (auto &i : a)
        {
            if (i == '0')
            {
                ctr0++;
            }
            else
            {
                ctr1++;
            }
        }
        if (min({ctr0, ctr1}) & 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
    return 0;
}