// https://codeforces.com/problemset/problem/281/A

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
        if (s[0] >= 'a')
        {
            s[0] -= 'a' - 'A';
        }
        cout << s << endl;
    }
    return 0;
}