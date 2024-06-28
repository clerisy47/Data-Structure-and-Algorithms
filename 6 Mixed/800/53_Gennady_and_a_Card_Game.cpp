// https://codeforces.com/problemset/problem/1097/A

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
    {
        string s;
        vector<string> a(5);
        cin >> s;
        bool f = false;
        for (int i = 0; i <= 4; i++)
        {
            cin >> a[i];
        }
        for (auto &it : a)
        {
            if (it[0] == s[0])
            {
                f = true;
            }
        }
        if (!f)
        {
            for (auto &it : a)
            {
                if (it[1] == s[1])
                {
                    f = true;
                }
            }
        }
        if (f)
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