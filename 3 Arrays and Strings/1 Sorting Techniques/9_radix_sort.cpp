#include <bits/stdc++.h>
using namespace std;

void counting_sort(vector<int> &nums, int exp)
{
    int n = nums.size();
    vector<int> output(n, 0);
    vector<int> count(10, 0);

    for (int i = 0; i < n; i++)
        count[(nums[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(nums[i] / exp) % 10] - 1] = nums[i];
        count[(nums[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        nums[i] = output[i];
}

void radix_sort(vector<int> &nums)
{
    int max_num = *max_element(nums.begin(), nums.end());

    for (int exp = 1; max_num / exp > 0; exp *= 10)
        counting_sort(nums, exp);
}

// Time Complexity: O(n*k) k is range of elements
// Space Complexity: O(n+k)