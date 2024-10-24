// https://codeforces.com/problemset/problem/1355/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf LLONG_MAX >> 1

pair<int, int> minMax(int n)
{
    int minE = +inf, maxE = -inf;
    for (int i = n; i != 0; i /= 10)
    {
        int x = i % 10;
        minE = min(minE, x);
        maxE = max(maxE, x);
    }
    return {minE, maxE};
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, nn;
        cin >> n >> nn;
        int r = n;
        for (int i = 2; i <= nn; i++)
        {
            pair<int, int> mm = minMax(r);
            if (mm.first == 0)
            {
                break;
            }
            r += mm.first * mm.second;
        }
        cout << r << endl;
    }
    return 0;
}