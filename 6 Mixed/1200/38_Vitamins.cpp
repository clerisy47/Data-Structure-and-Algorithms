// https://codeforces.com/problemset/problem/1042/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (const auto &elem : vec)
    {
        os << elem << " ";
    }
    return os;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> minV(7, 100000000001);
    map<string, int> m = {{"A", 0}, {"B", 1}, {"C", 2}, {"AB", 3}, {"BC", 4}, {"AC", 5}, {"ABC", 6}};
    while (n--)
    {
        int cost;
        string s;
        cin >> cost >> s;
        sort(s.begin(), s.end());
        minV[m[s]] = min(minV[m[s]], cost);
    }
    int r = min({minV[0] + minV[1] + minV[2], minV[3] + minV[4], minV[4] + minV[5], minV[5] + minV[3], minV[3] + minV[2], minV[4] + minV[0], minV[5] + minV[1], minV[6]});
    if (r >= 100000000001)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << r << endl;
    }

    return 0;
}