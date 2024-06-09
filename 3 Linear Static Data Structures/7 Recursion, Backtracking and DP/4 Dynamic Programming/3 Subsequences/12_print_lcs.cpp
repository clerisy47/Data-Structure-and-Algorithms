// https://www.naukri.com/code360/problems/print-longest-common-subsequence_8416383

#include <bits/stdc++.h>
using namespace std;

string findLCS(string str1, string str2)
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
    string ans = "";
    for (int i = n, j = m; i >= 1, i >= 1; i)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            ans.push_back(str1[i - 1]);
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}