// uses principle of hashing

#include <bits/stdc++.h>
using namespace std;

void count_sort(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return;

    int max_num = *max_element(nums.begin(), nums.end());

    vector<int> count(max_num + 1, 0);

    for (int num : nums)
        count[num]++;

    for (int i = 1; i <= max_num; i++)
        count[i] += count[i - 1];

    vector<int> sorted_array(n);

    for (int i = n - 1; i >= 0; i--)
    {
        sorted_array[count[nums[i]] - 1] = nums[i];
        count[nums[i]]--;
    }

    for (int i = 0; i < n; i++)
        nums[i] = sorted_array[i];
}

// Time Complexity: O(n+k) where k = range of input
// Space Complexity: O(k)
