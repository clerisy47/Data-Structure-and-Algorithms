#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> &arr, int k)
{
    int n = arr.size();
    int currSum = 0, maxSum = 0;
    for (int i = 0; i <= k - 1; i++)
    {
        currSum += arr[i];
    }
    maxSum = currSum;
    for (int l = 1, r = k; r <= n - 1; l++, r++)
    {
        currSum += arr[r] - arr[l - 1];
        if (currSum > maxSum)
            maxSum = currSum;
    }
    return maxSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}