// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


#include <bits/stdc++.h>
using namespace std;

// Brute Force
int bestTimeToBuyAndSellStock(vector<int> &prices)
{
    int n = prices.size();
    int max_profit = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            int curr_profit = prices[j] - prices[i];
            if (max_profit < curr_profit)
                max_profit = curr_profit;
        }
    }
    return max_profit;
}

// Optimal
int bestTimeToBuyAndSellStock(vector<int> &prices)
{
    int max_profit = 0, min_price = 1e9;
    for (int price : prices)
    {
        int profit = price - min_price;
        max_profit = max(max_profit, profit);
        min_price = min(min_price, price);
    }
    return max_profit;
}

int main()
{
    vector<int> prices = {7, 7, 9, 8, 6, 7, 6, 10, 5};
    int maxProfit = bestTimeToBuyAndSellStock(prices);
    cout << "Max Profit: " << maxProfit << endl;
    return 0;
}