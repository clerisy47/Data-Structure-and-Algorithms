// https://codeforces.com/problemset/problem/1857/A

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
        int n;
        int total = 0;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            total += x;
        }
        if ((total & 1) == 0)
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