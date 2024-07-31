// https://codeforces.com/problemset/problem/1038/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
    int nn = sum(n);
    if (n == 1 || n == 2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        cout << n - 1 << " ";
        for (int i = 1; i <= n - 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << 1 << " ";
        cout << n << endl;
    }
    return 0;
}