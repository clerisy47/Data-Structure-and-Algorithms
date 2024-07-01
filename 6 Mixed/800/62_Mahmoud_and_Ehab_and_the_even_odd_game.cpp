// https://codeforces.com/problemset/problem/959/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    {
        int n1;
        cin >> n1;
        if (n1 & 1 == 1)
        {
            cout << "Ehab" << endl;
        }
        else
        {
            cout << "Mahmoud" << endl;
        }
    }
    return 0;
}