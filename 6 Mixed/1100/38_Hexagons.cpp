// https://codeforces.com/problemset/problem/630/D

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define INF LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << 3 * n * (n + 1) + 1 << endl;
    return 0;
}