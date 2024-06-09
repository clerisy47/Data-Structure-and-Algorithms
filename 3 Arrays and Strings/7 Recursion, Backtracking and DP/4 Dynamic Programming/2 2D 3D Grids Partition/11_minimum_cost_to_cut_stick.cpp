// https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/

#include <bits/stdc++.h>
using namespace std;

int util(vector<int> &cuts, int i, int j, vector<vector<int>> &dp)
{
    if (i > j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int min_ele = 1e9;
    for (int k = i; k <= j; k++)
    {
        int ans = cuts[j + 1] - cuts[i - 1] + util(cuts, i, k - 1, dp) + util(cuts, k + 1, j, dp);
        min_ele = min(min_ele, ans);
    }
    return dp[i][j] = min_ele;
}

int minCost(int n, vector<int> &cuts)
{
    int c = cuts.size();
    cuts.push_back(0);
    cuts.push_back(n);
    sort(cuts.begin(), cuts.end());
    vector<vector<int>> dp(c + 1, vector<int>(c + 1));
    return util(cuts, 1, c, dp);
}

int minCost(int n, vector<int> &cuts)
{
    int c = cuts.size();
    cuts.push_back(0);
    cuts.push_back(n);
    sort(cuts.begin(), cuts.end());
    vector<vector<int>> dp(c + 2, vector<int>(c + 2));
    for (int i = c; i >= 1; i--)
    {
        for (int j = i; j <= c; j++)
        {
            if (i > j)
            {
                dp[i][j] = 0;
                continue;
            }
            int min_ele = 1e9;
            for (int k = i; k <= j; k++)
            {
                int ans = cuts[j + 1] - cuts[i - 1] + dp[i][k - 1] + dp[k + 1][j];
                min_ele = min(min_ele, ans);
            }
            dp[i][j] = min_ele;
        }
    }
    return dp[1][c];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}