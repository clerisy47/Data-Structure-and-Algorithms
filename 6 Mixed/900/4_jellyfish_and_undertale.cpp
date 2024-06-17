// https://codeforces.com/problemset/problem/1875/A

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
        int a, b, n;
        cin >> a >> b >> n;
        long long ans = b;
        int x;
        for (int i = 0; i <= n - 1; i++)
        {
            cin >> x;
            if (a > x)
            {
                ans += x;
            }
            else
            {
                ans += a - 1; // since we can't allow the bomb to be 0 until the end
            }
        }
        cout << ans << endl;
    }
    return 0;
}