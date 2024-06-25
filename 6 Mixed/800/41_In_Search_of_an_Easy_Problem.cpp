// https://codeforces.com/problemset/problem/1030/A

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
        int x;
        bool f = false;
        for (int i = 0; i <= n - 1; i++)
        {
            cin >> x;
            if (x == 1)
            {
                f = true;
            }
        }
        if (f)
        {
            cout << "HARD" << endl;
        }
        else
        {
            cout << "EASY" << endl;
        }
    }
    return 0;
}