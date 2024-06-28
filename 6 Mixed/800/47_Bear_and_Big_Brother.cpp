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
        int n1, n2;
        cin >> n1 >> n2;
        int ctr = 0;
        for (; n1 <= n2; n1 *= 3, n2 *= 2, ctr++)
        {
        }
        cout << ctr << endl;
    }
    return 0;
}