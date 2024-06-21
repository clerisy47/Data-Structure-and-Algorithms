// https://codeforces.com/problemset/problem/1559/A

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
        int n;
        cin >> n;
        vector<int> a = inputVector(n);
        int ans = a[0];
        for (int i = 1; i <= n - 1; i++)
        {
            ans = ans & a[i]; // since & almost always decreases value, doing & operations all the time will result the minimum possible
        }
        cout << ans << endl;
    }
    return 0;
}