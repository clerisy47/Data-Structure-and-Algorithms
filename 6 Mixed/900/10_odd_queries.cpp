// https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

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
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, l, r, k;
        cin >> n >> q;
        vector<int> a = inputVector(n);

        vector<int> pre(n + 1, 0); // 1 based indexing to avoid indexing errors
        for (int i = 0; i <= n - 1; i++)
        {
            pre[i + 1] = pre[i] + a[i];
        }

        int sum = pre[n];
        while (q--)
        {
            cin >> l >> r >> k;
            // 1-based to 0-based conversion
            int add = k * (r - l + 1) - (pre[r] - pre[l - 1]);
            if ((sum + add) % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}