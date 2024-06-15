// https://codeforces.com/problemset/problem/1805/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, ans = 0;
        bool f = false;
        cin >> n;
        for (int i = 0; i <= n - 1; i++)
        {
            cin >> x;

            ans ^= x;
        }
        if (ans == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << ans << endl;
            }
            else // if n is even every number will appear odd times in xor hence output can't be 0
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}