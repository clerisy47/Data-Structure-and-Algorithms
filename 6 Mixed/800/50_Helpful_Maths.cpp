// https://codeforces.com/problemset/problem/339/A

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
        string a;
        cin >> a;
        multiset<char> b;
        for (auto &i : a)
        {
            b.insert(i);
        }
        string ans;
        for (auto &i : b)
        {
            if (i != '+')
            {
                ans.push_back(i);
                ans.push_back('+');
            }
        }
        ans.pop_back();
        cout << ans << endl;
    }
    return 0;
}