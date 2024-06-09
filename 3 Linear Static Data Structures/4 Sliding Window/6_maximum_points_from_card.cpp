// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int> &arr, int k)
{
    int currSum = accumulate(arr.begin(), arr.begin() + k, 0);
    int maxSum = currSum;
    for (int i = k - 1, j = arr.size() - 1; i >= 0; i--, j--)
    {
        currSum += arr[j] - arr[i];
        if (currSum > maxSum)
            maxSum = currSum;
    }
    return maxSum;
}

// TC: O(2k)
// SC: O(1)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}