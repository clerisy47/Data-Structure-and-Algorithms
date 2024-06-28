// https://codeforces.com/problemset/problem/791/A

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
        cin >> s;
        set<char> a;
        for (auto &x : s)
        {
            a.insert(x);
        }
        if (a.size() & 1)
        {
            cout << "IGNORE HIM!" << endl;
        }
        else
        {
            cout << "CHAT WITH HER!" << endl;
        }
    }
    return 0;
}