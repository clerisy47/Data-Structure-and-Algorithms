#include <bits/stdc++.h>
using namespace std;
#define int long long

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
        map<int, int> m;
        int ctr = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            int x;
            cin >> x;
            m[x]++;
            ctr = max(m[x], ctr);
        }
        int cost = 0;
        for (; ctr < n;)
        {
            ctr <<= 1; // ctr *= 2;
            cost += ctr - ctr / 2;
            cost++;
        }
        cost -= ctr - n;
        cout << cost << endl;
    }
    return 0;
}