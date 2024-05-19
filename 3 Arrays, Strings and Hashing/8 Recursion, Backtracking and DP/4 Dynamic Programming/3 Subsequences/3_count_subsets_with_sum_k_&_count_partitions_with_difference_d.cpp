// https://www.naukri.com/code360/problems/number-of-subsets_3952532
// https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1

// if there are negative elements in array as well, we should use hashmaps instead of nested vectors (as negative indexing isn't allowed)

#include <bits/stdc++.h>
using namespace std;

int util(int i, int k, vector<int> &arr, vector<vector<int>> &dp)
{
    if (k == 0)
    {
        return 1;
    }
    if (k < 0)
    {
        return 0;
    }
    if (i == 0)
    {
        return arr[i] == k;
    }
    // if arr[i] can be 0 (one of the test cases in the problem above has so), remove the above if conditions (all 3)
    // if(i==0){
    //     if(k==0&&arr[i]==0) return 2;
    //     if(k==0||k==arr[0]) return 1;
    //     return 0;
    // }

    if (dp[i][k] != -1)
    {
        return dp[i][k];
    }

    int p1 = util(i - 1, k - arr[i], arr, dp);
    int p2 = util(i - 1, k, arr, dp);

    return dp[i][k] = p1 + p2;
}

int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (j == 0)
            {
                dp[i][j] = 1;
                continue;
            }
            if (i == 0)
            {
                dp[i][j] = arr[i] == j;
                continue;
            }
            // if arr[i] can be 0 (one of the test cases in the problem above has so), remove the above if conditions (all 3)
            // if (i == 0)
            // {
            //     if (j == 0 && arr[i] == 0)
            //     {
            //         dp[i][j] = 2;
            //         continue;
            //     }
            //     if (j == 0 || j == arr[0])
            //     {
            //         dp[i][j] = 1;
            //         continue;
            //     }
            //     dp[i][j] = 0;
            //     continue;
            // }
            int p1 = j - arr[i] >= 0 ? dp[i - 1][j - arr[i]] : 0;
            int p2 = dp[i - 1][j];

            dp[i][j] = p1 + p2;
        }
    }
    return dp[n - 1][k];
}

int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<vector<int>> dp(2, vector<int>(k + 1, -1));
    for (int i = 0; i <= n - 1; i++)
    {
        fill(dp[1].begin(), dp[1].end(), 0);
        for (int j = 0; j <= k; j++)
        {
            if (j == 0)
            {
                dp[1][j] = 1;
                continue;
            }
            if (i == 0)
            {
                dp[1][j] = arr[i] == j;
                continue;
            }
            // if arr[i] can be 0 (one of the test cases in the problem above has so), remove the above if conditions (all 3)
            // if (i == 0)
            // {
            //     if (j == 0 && arr[i] == 0)
            //     {
            //         dp[1][j] = 2;
            //         continue;
            //     }
            //     if (j == 0 || j == arr[0])
            //     {
            //         dp[1][j] = 1;
            //         continue;
            //     }
            //     dp[1][j] = 0;
            //     continue;
            // }
            int p1 = j - arr[i] >= 0 ? dp[0][j - arr[i]] : 0;
            int p2 = dp[0][j];

            dp[1][j] = p1 + p2;
        }
        dp[0] = dp[1];
    }
    return dp[0][k];
}

// for finding partitions with given difference ie i - j = d  or 2i - sum = d or i = (sum+d)/2 hence just finding number of (sum+d)/2 it will find out answer
int countPartitions(int n, int d, vector<int> &arr)
{
    int sum = accumulate(arr.begin(), arr.end(), 0);

    // Checking for edge cases
    if (sum + d < 0)
        return 0;
    if ((sum + d) % 2 == 1) // this statement is must or else function will loop for floor(sum/2) and may find it
        return 0;

    int k = (sum + d) / 2;

    return findWays(arr, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}