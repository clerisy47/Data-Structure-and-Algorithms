// https://codeforces.com/problemset/problem/1343/B

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n1;
        cin >> n1;
        if (n1 % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i <= (n1 - 1) / 2; i++)
            {
                cout << 2 * (i + 1) << " ";
            }
            int sum = 0;
            for (int i = 0; i <= (n1 - 1) / 2; i++)
            {
                if (i == (n1 - 1) / 2)
                {
                    cout << 3 * i + 2 << endl;
                }
                else
                {
                    sum += 2 * (i + 1) - 1;
                    cout << 2 * (i + 1) - 1 << " ";
                }
            }
        }
    }
    return 0;
}