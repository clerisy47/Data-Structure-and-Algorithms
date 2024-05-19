// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

// solved the same problem using dp in dp folder
// more variants in dp folder

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int max_profit = 0;
    int n = prices.size();
    for (int i = 0; i <= n - 2; i++)
    {
        if (prices[i] < prices[i + 1])
        {
            max_profit += prices[i + 1] - prices[i];
        }
    }
    return max_profit;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}