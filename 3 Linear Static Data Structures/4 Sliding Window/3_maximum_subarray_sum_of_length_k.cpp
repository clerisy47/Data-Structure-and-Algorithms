// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> &arr, int k)
{
    int n = arr.size();
    int currSum = 0;
    for (int i = 0; i <= k - 1; i++)
    {
        currSum += arr[i];
    }
    int maxSum = currSum;
    for (int i = 0, j = k; j <= n - 1; i++, j++) // here pointer i removes wheras j adds new elements to the window hence are assigned with indexes accordingly
    {
        currSum += arr[j] - arr[i];
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