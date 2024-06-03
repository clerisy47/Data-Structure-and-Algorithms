// https://codeforces.com/problemset/problem/1903/A

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
        int n, k, curr, prev = -1e9;
        bool isSorted = true;
        cin >> n;
        cin >> k;
        while (n--)
        {
            cin >> curr;
            if (curr < prev)
            {
                isSorted = false;
            }
            prev = curr;
        }
        if (isSorted)
        {
            cout << "YES" << endl;
        }
        else if (k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}