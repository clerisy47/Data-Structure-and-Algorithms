// https://www.naukri.com/code360/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494

// |s1-s2| will be minimum if s1=s2=s/2 hence, we can check if sum exists from s/2 to 0
// we don't need to call the isSubset function again and again as dp array will store if they exist from s/2 to 0

// if there are negative elements in array as well, we should use hashmaps instead of nested vectors (as negative indexing isn't allowed)

#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> isSubsetSum(vector<int> &arr, int k)
{
    vector<vector<bool>> dp(arr.size(), vector<bool>(k + 1));
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        for (int j = 0; j <= k; j++)
        {

            if (j == 0)
            {
                dp[i][j] = true;
                continue;
            }
            if (i == 0)
            {
                dp[i][j] = arr[0] == j;
                continue;
            }
            bool p1 = j - arr[i] >= 0 ? dp[i - 1][j - arr[i]] : false;
            bool p2 = dp[i - 1][j];

            dp[i][j] = p1 || p2;
        }
    }
    return dp;
}

int minSubsetSumDifference(vector<int> &arr, int n)
{
    int sum = accumulate(arr.begin(), arr.end(), 0);
    vector<vector<bool>> dp = isSubsetSum(arr, sum / 2);
    for (int i = sum / 2; i >= 0; i--) // the lowest possible will be when its sum/2 and highest will be when it's 0 so we're traversing reversely
    {
        if (dp[n - 1][i])
        {
            return abs(2 * i - sum); // i - j = i - sum + i = 2*i - sum
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}