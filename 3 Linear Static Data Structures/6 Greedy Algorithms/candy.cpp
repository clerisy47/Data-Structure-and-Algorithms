// https://leetcode.com/problems/candy/

#include <bits/stdc++.h>
using namespace std;

int candy(vector<int> &ratings)
{
    int n = ratings.size();
    vector<int> candies(n, 1);
    // making sure each child gets more chocolate then left neighbour (from left to right)
    for (int i = 1; i <= n - 1; i++)
    {
        if (ratings[i] > ratings[i - 1] && candies[i] <= candies[i - 1])
        {
            candies[i] = candies[i - 1] + 1;
        }
    }
    // making sure each child gets more chocolate then right neighbour (from right to left)
    for (int i = n - 2; i >= 0; i--)
    {
        if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1])
        {
            candies[i] = candies[i + 1] + 1;
        }
    }

    return accumulate(candies.begin(), candies.end(), 0);
}

int candy(vector<int> &ratings)
{
    int n = ratings.size();
    int candy = n;
    for (int i = 1; i <= n - 1;)
    {
        // For slope = 0
        if (ratings[i] == ratings[i - 1])
        {
            i++;
            continue;
        }

        // For positive slope (increasing)
        int peak = 0;
        while (i <= n - 1 && ratings[i] > ratings[i - 1])
        {
            peak++;
            candy += peak;
            i++;
        }

        // For negative slope (decreasing)
        int valley = 0;
        while (i <= n - 1 && ratings[i] < ratings[i - 1])
        {
            valley++;
            candy += valley;
            i++;
        }
        candy -= min(peak, valley); // Keep either the higher peak or deeper valley
    }
    return candy;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}