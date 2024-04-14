// 13, 46, 24, 52, 20, 9
// Max heapify:
// 52 13 24 46 20 9
// 52 20 24 13 46 9
// 52 46 24 13 20 9
// Deletion:
// 9 13 20 24 46 52

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &nums, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && nums[l] > nums[largest])
    {
        largest = l;
    }

    if (r < n && nums[r] > nums[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(nums[i], nums[largest]);
        heapify(nums, n, largest);
    }
}

void heap_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = nums.size() / 2 - 1; i >= 0; i--)
        heapify(nums, nums.size(), i);

    for (int i = nums.size() - 1; i > 0; i--)
    {

        swap(nums[0], nums[i]);

        heapify(nums, i, 0);
    }
}

// Time Complexity: O(nlogn)
// Space Complexity O(1)
