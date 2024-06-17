#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    while (tc--)
    {
        int n;
        cin >> n;
        int ans = 0;
        while (n--)
        {
            string a;
            cin >> a;
            if (a == "X++" || a == "++X")
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}