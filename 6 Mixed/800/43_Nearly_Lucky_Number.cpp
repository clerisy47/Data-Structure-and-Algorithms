// https://codeforces.com/problemset/problem/110/A

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
    {
        string a;
        cin >> a;
        int ctr = 0;
        for (int i = 0; i <= a.size() - 1; i++)
        {
            if (a[i] == '4' || a[i] == '7')
            {
                ctr++;
            }
        }
        bool f = false;
        if (ctr == 0)
        {
            f = true;
        }
        for (int i = ctr; i > 0; i /= 10)
        {
            if (i != 4 && i != 7)
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}