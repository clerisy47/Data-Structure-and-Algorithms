// https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> h(n);
    for (int i = 1; i <= n - 1; i++)
    {
        h[i] = h[i - 1] + (s[i] == s[i - 1]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        cout << h[n2 - 1] - h[n1 - 1] << endl;
    }
    return 0;
}