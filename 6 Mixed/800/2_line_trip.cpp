// https://codeforces.com/problemset/problem/1901/A

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
        int n, x, prev = 0, maxDiff = INT_MIN;
        cin >> n;
        cin >> x;
        for (int i = 0; i <= n - 1; i++)
        {
            int curr;
            cin >> curr;
            maxDiff = max(maxDiff, curr - prev);
            prev = curr;
        }
        maxDiff = max(maxDiff, (x - prev) * 2);
        cout << maxDiff << endl;
    }

    return 0;
}