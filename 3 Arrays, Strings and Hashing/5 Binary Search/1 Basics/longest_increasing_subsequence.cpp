// https://leetcode.com/problems/longest-increasing-subsequence/description/

#include <bits/stdc++.h>
using namespace std;

// Less optimal approach in binary search folder
int lengthOfLIS(vector<int> &arr)
{
    vector<int> sub; // this is not the actual subsequence
    sub.push_back(arr[0]);
    for (int i = 1; i <= arr.size() - 1; i++)
    {
        if (arr[i] > sub.back())
            sub.push_back(arr[i]);
        // int lb = lower_bound(sub.begin(), sub.end(), arr[i]) - sub.begin();
        // sub[lb] = arr[i];
        // a bit faster and cooler
        auto lb = lower_bound(sub.begin(), sub.end(), arr[i]);
        *lb = arr[i];
    }

    return sub.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}