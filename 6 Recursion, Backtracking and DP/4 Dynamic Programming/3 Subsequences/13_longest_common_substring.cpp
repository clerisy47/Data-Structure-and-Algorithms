// https://www.geeksforgeeks.org/problems/longest-common-substring1452/1

#include <bits/stdc++.h>
using namespace std;

// hard via memoization

int longestCommonSubstring(string str1, string str2)
{
    int n = str1.size(), m = str2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans, dp[i][j]);

                continue;
            }
            dp[i][j] = 0; // same as longest common subsequence except this and it uses ans variable as the maximum may not be the last element in this case
        }
    }
    return ans;
}

int longestCommonSubstring(string str1, string str2)
{
    int n = str1.size(), m = str2.size();
    vector<vector<int>> dp(2, vector<int>(m + 1));
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[1][j] = 1 + dp[0][j - 1];
                ans = max(ans, dp[1][j]);

                continue;
            }
            dp[1][j] = 0;
        }
        dp[0] = dp[1];
    }
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}