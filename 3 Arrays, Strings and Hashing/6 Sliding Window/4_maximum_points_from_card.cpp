// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int> &arr, int k)
{
    int currSum = accumulate(arr.begin(), arr.begin() + k, 0);
    int maxSum = currSum;
    for (int l = k - 1, r = arr.size() - 1; l >= 0; l--, r--)
    {
        currSum += arr[r] - arr[l];
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