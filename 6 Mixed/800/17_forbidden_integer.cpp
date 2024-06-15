// https://codeforces.com/problemset/problem/1845/A

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
        int n, k, x; // here n is target, 1 to k excluding x
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            while (n--)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else if (k == 1 || (k == 2 && n % 2 != 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            if (n % 2 == 1)
            {
                cout << 3 << ' '; // if 1 then cout 1 if not then cout 2s or combination of 1 3 and 2s
                n-=3;
            }
            for (int i = 0; i <= n - 1; i += 2)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}