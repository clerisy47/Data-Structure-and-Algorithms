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
        string a;
        cin >> a;
        for (int i = 0; i <= a.size() - 1; i++)
        {
            if (i == 0 && a[i] == '9')
            {
                continue;
            }
            if (a[i] - '0' >= 5)
            {
                a[i] = '0' + 9 - (a[i] - '0');
            }
        }
        cout << a << endl;
    }
    return 0;
}