// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

// solved the same problem using greedy in greedy folder
// more variants in greedy folder

#include <bits/stdc++.h>
using namespace std;

int util(int i, bool canBuy, vector<int> &prices, vector<vector<int>> &dp)
{
    if (i == prices.size())
    {
        return 0;
    }
    if (dp[i][canBuy] != -1)
    {
        return dp[i][canBuy];
    }
    int profit;
    if (canBuy)
    {
        int p1 = -prices[i] + util(i + 1, false, prices, dp);
        int p2 = util(i + 1, canBuy, prices, dp);
        profit = max(p1, p2);
    }
    else
    {
        int p3 = prices[i] + util(i + 1, true, prices, dp);
        int p4 = util(i + 1, canBuy, prices, dp);
        profit = max(p3, p4);
    }
    return dp[i][canBuy] = profit;
}

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n, vector<int>(2, -1));
    return util(0, true, prices, dp);
}

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n + 1, vector<int>(2, -1)); // n+1 to store the edge case or you can use multiple if conditions to prevent it as well
    for (int i = n; i >= 0; i--)
    {
        for (int canBuy = 1; canBuy >= 0; canBuy--)
        {
            if (i == n)
            {
                dp[i][canBuy] = 0; // no need for this condition
                continue;
            }
            int profit;
            if (canBuy)
            {
                int p1 = -prices[i] + dp[i + 1][false];
                int p2 = dp[i + 1][canBuy];
                profit = max(p1, p2);
            }
            else
            {
                int p3 = prices[i] + dp[i + 1][true];
                int p4 = dp[i + 1][canBuy];
                profit = max(p3, p4);
            }
            dp[i][canBuy] = profit;
        }
    }
    return dp[0][true];
}

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(2, vector<int>(2, -1));
    for (int i = n; i >= 0; i--)
    {
        for (int canBuy = 1; canBuy >= 0; canBuy--)
        {
            if (i == n)
            {
                dp[0][canBuy] = 0; // no need for this condition
                continue;
            }
            int profit;
            if (canBuy)
            {
                int p1 = -prices[i] + dp[1][false];
                int p2 = dp[1][canBuy];
                profit = max(p1, p2);
            }
            else
            {
                int p3 = prices[i] + dp[1][true];
                int p4 = dp[1][canBuy];
                profit = max(p3, p4);
            }
            dp[0][canBuy] = profit;
        }
        dp[1] = dp[0];
    }
    return dp[0][true];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}