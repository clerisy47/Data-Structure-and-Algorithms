// https://codeforces.com/problemset/problem/268/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

int sum(int n)
{
    return n * (n + 1) / 2;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int r = 0;
    for (int i = n; i >= 1; i--)
    {
        r += i * (n - i + 1);
    }
    r -= sum(n - 1);
    cout << r << endl;

    return 0;
}