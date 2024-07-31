// https://www.hackerrank.com/contests/ieeextreme-challenges/challenges/zoom-in

// TODO: all test cases not completed

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    {
        int n, nn, nnn;
        cin >> n >> nn >> nnn;
        vector<vector<string>> v(200, vector<string>(n));
        for (int i = 0; i <= nnn - 1; i++)
        {
            char c;
            cin >> c;
            cin.ignore();
            for (int i = 0; i <= n - 1; i++)
            {
                getline(cin, v[c][i]);
            }
        }
        int nnnn;
        cin >> nnnn;
        for (int i = 0; i <= nnnn - 1; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j <= n - 1; j++)
            {
                for (auto &x : s)
                {
                    cout << v[x][j];
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}