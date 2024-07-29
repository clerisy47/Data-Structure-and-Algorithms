// https://codeforces.com/problemset/problem/1511/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define INF LLONG_MAX >> 1

std::string operator*(const std::string &str, int times)
{
    std::string result;
    for (int i = 0; i < times; ++i)
    {
        result += str;
    }
    return result;
}
std::string operator*(int times, const std::string &str)
{
    return str * times;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, nn, nnn;
        cin >> n >> nn >> nnn;
        string s = "1", ss = "0";
        cout << s << ss * (n - 1) << " " << s * (nn - nnn + 1) << ss * (nnn - 1) << endl;
    }
    return 0;
}