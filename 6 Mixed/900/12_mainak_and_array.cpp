// https://codeforces.com/problemset/problem/1726/a

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
        // case 1: no element is rotated
        int ans = a[n - 1] - a[0];
        // case 2: every element is roated
        for (int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, a[i - 1] - a[i]);
        }
        // case 3: every element except first is rotated
        for (int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, a[i] - a[0]);
        }
        // case 4: every element except last is roated
        for (int i = 0; i <= n - 2; i++)
        {
            ans = max(ans, a[n - 1] - a[i]);
        }
        // other cases may not exist as we either rotate to move an ele to first or last
        cout << ans << endl;
    }
    return 0;
}