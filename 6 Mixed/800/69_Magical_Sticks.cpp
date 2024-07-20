// https://codeforces.com/problemset/problem/1371/A

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
        int n1;
        cin >> n1;
        cout << (int)ceil(1.0 * n1 / 2) << endl;
    }
    return 0;
}