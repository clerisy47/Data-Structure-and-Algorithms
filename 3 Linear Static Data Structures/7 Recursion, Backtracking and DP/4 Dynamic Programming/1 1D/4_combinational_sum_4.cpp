// https://leetcode.com/problems/combination-sum-iv/description/

// combinational 1, 2, 3 in recursion folder

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int combinationSum4(vector<int> &a, int t)
    {
        vector<unsigned long long> dp(t + 1);
        dp[0] = 1;
        // We can make 0 only by one combination ie selecting no elements
        // More precisely, it is taken just for convenience,
        //  since in each a[i], we have at least one combination, it'll do so by taking dp[0]
        for (int i = 1; i < dp.size(); i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (i - a[j] > -1)
                {
                    dp[i] += dp[i - a[j]];
                }
            }
        }
        return dp[t];
    }
};

// if we consider taking 0 as target is impossible

class Solution
{
public:
    int combinationSum4(vector<int> &a, int t)
    {
        vector<unsigned long long> dp(t + 1);
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] <= t)
            {
                dp[a[j]] = 1;
            }
        }
        for (int i = 1; i < dp.size(); i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (i - a[j] > -1)
                {
                    dp[i] += dp[i - a[j]];
                }
            }
        }
        return dp[t];
    }
};