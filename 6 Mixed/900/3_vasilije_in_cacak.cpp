// https://codeforces.com/problemset/problem/1878/C

#include <bits/stdc++.h>
using namespace std;

long long sumFromA(int n, int a) // decreasing sum from k
{
    return 1ll * n * (2 * a - n + 1) / 2;
}

long long sumFrom1(int n) // increasing sum from 1 to n
{
    return 1LL * n * (n + 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        if (x < sumFrom1(k) || sumFromA(k, n) < x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}