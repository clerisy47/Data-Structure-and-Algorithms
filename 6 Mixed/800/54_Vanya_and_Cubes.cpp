// https://codeforces.com/problemset/problem/492/A

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
        int n;
        cin >> n;
        int i, sum;
        for (i = 0, sum = 0; sum < n; i++)
        {
            sum += i * (i + 1) / 2;
        }
        if (sum == n)
        {
            cout << i - 1 << endl;
        }
        else
        {
            cout << i - 2 << endl;
        }
    }
    return 0;
}