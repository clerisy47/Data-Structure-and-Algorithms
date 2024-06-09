// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

// for best time to buy and sell 2 just keep cap = 2;

#include <bits/stdc++.h>
using namespace std;

int util(int i, bool canBuy, int cap, vector<int> &prices, vector<vector<vector<int>>> &dp)
{
    if (i == prices.size() || cap == 0)
    {
        return 0;
    }
    if (dp[i][canBuy][cap] != -1)
    {
        return dp[i][canBuy][cap];
    }
    int profit;
    if (canBuy)
    {
        int p1 = -prices[i] + util(i + 1, false, cap, prices, dp);
        int p2 = util(i + 1, canBuy, cap, prices, dp);
        profit = max(p1, p2);
    }
    else
    {
        int p3 = prices[i] + util(i + 1, true, cap - 1, prices, dp); // don't place cap-1 in p1 or else it won't be able to sell stock at last
        int p4 = util(i + 1, canBuy, cap, prices, dp);
        profit = max(p3, p4);
    }
    return dp[i][canBuy][cap] = profit;
}

int maxProfit(int k, vector<int> &prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
    return util(0, true, k, prices, dp);
}

int maxProfit(int k, vector<int> &prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(k + 1, -1)));
    for (int i = n; i >= 0; i--) // for cooldown problem, dp array size should be n+2 as it may reach index i+1 and change others same as memoization above
    {
        for (int canBuy = 1; canBuy >= 0; canBuy--)
        {
            for (int cap = k; cap >= 0; cap--)
            {
                if (i == n || cap == 0)
                {
                    dp[i][canBuy][cap] = 0; // no need for this condition
                    continue;
                }
                int profit;
                if (canBuy)
                {
                    int p1 = -prices[i] + dp[i + 1][false][cap];
                    int p2 = dp[i + 1][canBuy][cap];
                    profit = max(p1, p2);
                }
                else
                {
                    int p3 = prices[i] + dp[i + 1][true][cap - 1];
                    int p4 = dp[i + 1][canBuy][cap];
                    profit = max(p3, p4);
                }
                dp[i][canBuy][cap] = profit;
            }
        }
    }
    return dp[0][true][k];
}

int maxProfit(int k, vector<int> &prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> dp(2, vector<vector<int>>(2, vector<int>(k + 1, -1)));
    for (int i = n; i >= 0; i--) // for cooldown problem, dp array size should be n+2 as it may reach index i+1 and change others same as memoization above
    {
        for (int canBuy = 1; canBuy >= 0; canBuy--)
        {
            for (int cap = k; cap >= 0; cap--)
            {
                if (i == n || cap == 0)
                {
                    dp[0][canBuy][cap] = 0; // no need for this condition
                    continue;
                }
                int profit;
                if (canBuy)
                {
                    int p1 = -prices[i] + dp[1][false][cap];
                    int p2 = dp[1][canBuy][cap];
                    profit = max(p1, p2);
                }
                else
                {
                    int p3 = prices[i] + dp[1][true][cap - 1];
                    int p4 = dp[1][canBuy][cap];
                    profit = max(p3, p4);
                }
                dp[0][canBuy][cap] = profit;
            }
            dp[1] = dp[0];
        }
    }
    return dp[0][true][k];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}