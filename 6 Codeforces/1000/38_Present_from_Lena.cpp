// https://codeforces.com/problemset/problem/118/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << j;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << j;
        }
        for (int j = n - 1 - i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}