// https://codeforces.com/problemset/problem/1593/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

int util(string &a, string &b)
{
    int i, j, n = a.size();
    for (i = n - 1; i >= 0 && a[i] != b[1]; i--)
    {
    }
    for (j = i - 1; j >= 0 && a[j] != b[0]; j--)
    {
    }
    if (j <= -1)
    {
        return INT_MAX;
    }
    return i - j - 1 + (n - 1 - i);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    vector<string> subsequence = {"00", "25", "50", "75"};
    while (t--)
    {
        string a;
        cin >> a;
        int ctr = INT_MAX;
        for (auto &i : subsequence)
        {
            ctr = min(ctr, util(a, i));
        }

        cout << ctr << endl;
    }
    return 0;
}