// https://codeforces.com/problemset/problem/894/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1

int numberofSubsequence(string &s1, string &s2)
{
    vector<int> dp(s2.size() + 1); // leaving first element empty to reduce error due to bounds
    dp[0] = 1;
    for (auto &x : s1)
    {
        for (int i = 0; i <= s2.size() - 1; i++)
        {
            if (x == s2[i])
            {
                dp[i + 1] += dp[i]; // Normalizing
            }
        }
    }
    return dp[s2.size()];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    {
        string s1;
        cin >> s1;
        string s2 = "QAQ";
        cout << numberofSubsequence(s1, s2) << endl;
    }
    return 0;
}