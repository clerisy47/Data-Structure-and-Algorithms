// https://codeforces.com/problemset/problem/1896/A

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
        int n, x;
        bool canBeSorted = false;
        cin >> n;
        cin >> x;
        if (x == 1)
        {
            canBeSorted = true;
        }
        n--;
        while (n--)
        {
            cin >> x;
        }
        if (canBeSorted)
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