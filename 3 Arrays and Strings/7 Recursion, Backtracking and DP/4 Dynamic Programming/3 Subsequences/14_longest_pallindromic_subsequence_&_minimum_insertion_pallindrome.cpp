// https://leetcode.com/problems/longest-palindromic-subsequence/description/
// https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/submissions/1258372203/

#include <bits/stdc++.h>
using namespace std;

// just pass string and its reverse to the function from longest common subsequence code

int longestCommonSubsequence(string &str1, string &str2)
{
    int n = str1.size(), m = str2.size();
    vector<vector<int>> dp(2, vector<int>(m + 1)); // in case of problems where its invalid going to negative, normalize
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1]) // denormalize
            {
                dp[1][j] = 1 + dp[0][j - 1];
                continue;
            }
            dp[1][j] = max(dp[0][j], dp[1][j - 1]);
        }
        dp[0] = dp[1];
    }
    return dp[0][m];
}

int longestPalindromeSubsequence(string s)
{
    string t = s;
    reverse(s.begin(), s.end());
    return longestCommonSubsequence(s, t);
}

// the subsequence of characters which aren't pallindromic need to be inserted to make a string pallindromic
int minInsertions(string s)
{
    int n = s.size();
    string t = s;
    reverse(s.begin(), s.end());
    return n - longestCommonSubsequence(s, t);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}