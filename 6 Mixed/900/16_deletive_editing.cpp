// https://codeforces.com/problemset/problem/1666/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, ans;
        cin >> a >> b;
        multiset<char> s;
        int i;
        for (i = 0; i <= b.size() - 1; i++)
        {
            s.insert(b[i]);
        }
        for (i = a.size() - 1; i >= 0; i--)
        {
            auto it = s.find(a[i]);
            if (it != s.end())
            {
                ans.push_back(a[i]);
                s.erase(it);
            }
        }
        reverse(ans.begin(), ans.end());
        if (ans == b)
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