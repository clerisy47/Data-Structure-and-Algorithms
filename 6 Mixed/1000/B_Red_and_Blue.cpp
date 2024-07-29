// https://codeforces.com/problemset/problem/1469/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
    for (auto &elem : vec)
    {
        is >> elem;
    }
    return is;
}

// dp
// int util(int i, int j, vector<int> &a, vector<int> &aa, vector<vector<int>> &dp)
// {
//     if (dp[i][j] != inf)
//     {
//         return dp[i][j];
//     }
//     if (i >= aa.size() && j >= aa.size())
//     {
//         return 0;
//     }

//     int p1 = i >= a.size() ? 0 : a[i] + util(i + 1, j, a, aa, dp);
//     int p2 = j >= aa.size() ? 0 : aa[j] + util(i, j + 1, a, aa, dp);
//     return dp[i][j] = max({p1, p2, 0ll});
// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         cin >> a;
//         int nn;
//         cin >> nn;
//         vector<int> aa(nn);
//         cin >> aa;
//         vector<vector<int>> dp(n + 1, vector<int>(nn + 1, inf));
//         cout << util(0, 0, a, aa, dp) << endl;
//     }
//     return 0;
// }

// greedy
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        cin >> a;
        int nn;
        cin >> nn;
        vector<int> aa(nn);
        cin >> aa;
        for (int i = 1; i <= n - 1; i++)
        {
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= nn - 1; i++)
        {
            aa[i] += aa[i - 1];
        }
        int maxa = *max_element(a.begin(), a.end());
        int maxaa = *max_element(aa.begin(), aa.end());

        cout << max({0ll, maxa, maxaa, maxa + maxaa}) << endl;
    }
    return 0;
}