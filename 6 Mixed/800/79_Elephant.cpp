// https://codeforces.com/problemset/problem/617/A

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
    {
        int n1;
        cin >> n1;
        int r1;
        r1 = n1 / 5;
        if (n1 % 5 != 0)
        {
            r1++;
        }
        cout << r1 << endl;
    }
    return 0;
}