// https://codeforces.com/problemset/problem/1806/A

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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int diff1 = a + d - b - c;
        int diff2 = d - b;
        if (diff1 < 0 || diff2 < 0)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << diff1 + diff2 << endl;
        }
    }
    return 0;
}