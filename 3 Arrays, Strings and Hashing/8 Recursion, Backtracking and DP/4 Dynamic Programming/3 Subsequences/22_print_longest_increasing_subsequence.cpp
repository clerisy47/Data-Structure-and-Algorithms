// https://www.geeksforgeeks.org/problems/printing-longest-increasing-subsequence/1

#include <bits/stdc++.h>
using namespace std;

vector<int> longestIncreasingSubsequence(vector<int> &arr)
{
    int n = arr.size();
    vector<int> dp(n, 1), hash(n, -1); // if contains lis than it will contain the last index if not then i
    for (int i = 0; i <= n - 1; i++)
    {
        for (int prev = 0; prev <= i - 1; prev++)
        {
            if (arr[prev] < arr[i] && dp[prev] + 1 > dp[i])
            {
                dp[i] = dp[prev] + 1;
                hash[i] = prev;
            }
        }
    }
    auto it = max_element(dp.begin(), dp.end());
    int maxEle = *it, lasti = it - dp.begin();

    vector<int> ans;
    ans.push_back(arr[lasti]);

    while (hash[lasti] != -1)
    {
        lasti = hash[lasti];
        ans.push_back(arr[lasti]);
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