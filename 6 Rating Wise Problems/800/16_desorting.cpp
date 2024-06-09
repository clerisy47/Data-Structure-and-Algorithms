// https://codeforces.com/problemset/problem/1853/A

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
        vector<int> arr;
        cin >> n;
        int minDiff = INT_MAX;
        int prev;
        cin >> prev;
        n--;
        while (n--)
        {
            int curr;
            cin >> curr;
            minDiff = min(minDiff, curr - prev);
            prev=curr;
        }
        if (minDiff < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << minDiff / 2 + 1 << endl;
        }
    }
    return 0;
}