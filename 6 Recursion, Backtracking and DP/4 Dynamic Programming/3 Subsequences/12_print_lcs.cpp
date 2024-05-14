#include <bits/stdc++.h>
using namespace std;

string longestCommonSubsequence(string str1, string str2)
{
    // finding length of lcs using previous question
    int n = str1.size(), m = str2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1)); // in case of problems where its invalid going to negative, normalize
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1]) // denormalize
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                continue;
            }
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // backtracking
    int len = dp[n][m];
    int i = n;
    int j = m;
    int index = len - 1;
    string ans;
    for (int k = 0; k <= len - 1; k++)
    {
        ans.push_back(' '); // dummy string
    }
    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            ans[index] = str1[i - 1];
            index--;
            i--;
            j--;
        }
        else if (str1[i - 1] > str2[j - 1])  // basically reversing the dp code
        {
            i--;
        }
        else
            j--;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}