// https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = INT_MAX;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans << endl;

    return 0;
}