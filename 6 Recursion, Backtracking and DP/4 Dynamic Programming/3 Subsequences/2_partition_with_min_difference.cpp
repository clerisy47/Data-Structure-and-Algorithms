// https://www.naukri.com/code360/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494

// |s1-s2| will be minimum if s1=s2=s/2 hence, we can check if sum exists from s/2 to 0
// we don't need to call the isSubset function again and again as dp array will store if they exist from s/2 to 0

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}