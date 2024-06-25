// https://codeforces.com/problemset/problem/723/A

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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        cout << max({n1, n2, n3}) - min({n1, n2, n3}) << endl; // max - mid + mid - min
    }
    return 0;
}