// https://www.hackerrank.com/contests/ieeextreme-challenges/challenges/digit-fun

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

    while (true)
    {
        string s;
        cin >> s;
        if (s == "1")
        {
            cout << 1 << endl;
            continue;
        }
        if (s == "END")
        {
            break;
        }
        int n = s.size();
        int c = 2;
        for (int i = n; i != 1; i = log10(i) + 1, c++)
        {
        }
        cout << c << endl;
    }
    return 0;
}