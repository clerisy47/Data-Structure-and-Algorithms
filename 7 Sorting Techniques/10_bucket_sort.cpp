#include <bits/stdc++.h>
using namespace std;

void bucket_sort(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 1)
        return;

    int max_num = *max_element(nums.begin(), nums.end());
    int min_num = *min_element(nums.begin(), nums.end());

    int range = (max_num - min_num) / n + 1;

    vector<vector<int>> buckets(n);

    for (int num : nums)
    {
        int index = (num - min_num) / range;
        buckets[index].push_back(num);
    }

    for (auto &bucket : buckets)
        sort(bucket.begin(), bucket.end());

    int index = 0;
    for (auto &bucket : buckets)
    {
        for (int num : bucket)
            nums[index++] = num;
    }
}

// Time Complexity: O(n+k) (best and average case) O(n^2) worst case  where k is number of buckets
// Space Complexity: O(n)