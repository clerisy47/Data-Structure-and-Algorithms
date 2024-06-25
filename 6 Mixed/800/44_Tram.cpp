// https://codeforces.com/problemset/problem/116/A

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
        int n;
        cin >> n;
        int ctr = 0, maxCtr = 0;
        int n1, n2;
        for (int i = 0; i <= n - 1; i++)
        {
            cin >> n1 >> n2;
            ctr += n2 - n1;
            maxCtr = max(maxCtr, ctr);
        }
        cout << maxCtr << endl;
    }
    return 0;
}