// https://codeforces.com/problemset/problem/510/A

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
        int n1, n2;
        cin >> n1 >> n2;
        for (int i = 0; i <= n1 - 1; i++)
        {
            if (i % 4 == 0 || i % 4 == 2)
            {
                for (int j = 0; j <= n2 - 1; j++)
                {
                    cout << '#';
                }
                cout << endl;
            }
            else if (i % 4 == 1)
            {
                for (int j = 0; j <= n2 - 2; j++)
                {
                    cout << '.';
                }
                cout << '#';
                cout << endl;
            }
            else
            {
                cout << '#';
                for (int j = 0; j <= n2 - 2; j++)
                {
                    cout << '.';
                }
                cout << endl;
            }
        }
    }
    return 0;
}