// https://codeforces.com/problemset/problem/732/A

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
    int n1, n2;
    cin >> n1 >> n2;
    int i;
    for (i = 1; (i * n1 % 10 != n2) && (i * n1 % 10 != 0); i++)
    {
    }
    cout << i << endl;

    return 0;
}