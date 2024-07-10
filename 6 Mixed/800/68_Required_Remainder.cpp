// https://codeforces.com/problemset/problem/1374/A

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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int r1 = n3 - n3 % n1 + n2;
        if (r1 <= n3)
        {
            cout << r1 << endl;
        }
        else
        {
            cout << r1 - n1 << endl;
        }
    }
    return 0;
}