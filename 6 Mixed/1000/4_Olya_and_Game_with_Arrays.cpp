// https://codeforces.com/problemset/problem/1859/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1

vector<int> inputVector(int n)
{
    vector<int> arr;
    int x;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    return arr;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n);
        for (int i = 0; i <= n - 1; i++)
        {
            int m;
            cin >> m;
            a[i] = inputVector(m);
            sort(a[i].begin(), a[i].end());
        }
        int minE = INFINITY, mini = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i][1] < minE)
            {
                minE = a[i][1];
                mini = i;
            }
        }
        minE = INFINITY;
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i][0] < minE)
            {
                minE = a[i][0];
            }
        }
        int r = minE;
        for (int i = 0; i <= n - 1; i++)
        {
            if (i != mini && a[i].size() >= 2)
            {
                r += a[i][1];
            }
        }
        cout << r << endl;
    }
    return 0;
}