// https://codeforces.com/problemset/problem/977/A

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
        int n, k;
        cin >> n >> k;
        for (int i = 0; i <= k - 1; i++)
        {
            if (n % 10 != 0)
            {
                n--;
            }
            else
            {
                n /= 10;
            }
        }
        cout << n << endl;
    }
    return 0;
}