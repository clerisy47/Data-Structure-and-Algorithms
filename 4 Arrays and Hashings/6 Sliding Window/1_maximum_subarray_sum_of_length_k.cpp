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
    for (int l = 0, r = k; r <= n - 1; l++, r++) // here pointer l removes wheras r adds new eliminates to window hence are assigned with indexes accordingly
    {
        currSum += arr[r] - arr[l];
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