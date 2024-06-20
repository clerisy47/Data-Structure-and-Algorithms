// https://codeforces.com/problemset/problem/1837/B

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
        string s;
        cin >> n >> s;
        int ctr = 1, maxCtr = 1;
        for (int i = 1; i <= n - 1; i++)
        {
            if (s[i] == s[i - 1])
            {
                ctr++;
                maxCtr = max(maxCtr, ctr);
            }
            else
            {
                ctr = 1;
            }
        }
        cout << maxCtr + 1 << endl; // since we need extra element in array to compare
    }
    return 0;
}