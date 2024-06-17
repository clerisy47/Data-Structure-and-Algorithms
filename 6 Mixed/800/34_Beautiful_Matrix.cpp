// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

vector<vector<int>> inputNestedVector(int n, int m)
{
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    return arr;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    while (tc--)
    {
        int n = 5;
        vector<vector<int>> a = inputNestedVector(n, n);
        int i, j;
        bool f = false;
        for (i = 0; i <= n - 1; i++)
        {
            for (j = 0; j <= n - 1; j++)
            {
                if (a[i][j])
                {
                    f = true;
                    break;
                }
            }
            if (f)
            {
                break;
            }
        }
        cout << (abs(i - 2) + abs(j - 2)) << endl;
    }
    return 0;
}