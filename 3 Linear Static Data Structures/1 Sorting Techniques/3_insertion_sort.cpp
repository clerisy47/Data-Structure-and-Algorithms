// 13, 46, 24, 52, 20, 9
// 1st iteration: there's no element left to 13
// 2nd iteration: there's an element left to 46 but its greater than 13 (sorted)
// 3rd iteration: swaps 24 and 13
// 4th iteration: no swap
// 5th iteration: swaps 20 till it reahes 13
// final iteration: swaps till it reaches first
//(just inverse of bubble sort)

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums)
{
    for (int i = 1; i <= nums.size() - 1; i++) // unlike bubble sort and selection sort can't ignore the last element but can ignore the first element
    {
        for (int j = i; j >= 1 && nums[j] < nums[j - 1]; j--)
        {
            swap(nums[j], nums[j - 1]);
        }
    }
}

// Recursive Approach
void insertion_sort(vector<int> &nums, int n)
{
    if (n == 1)
        return;

    insertion_sort(nums, n - 1);

    for (int j = n; j >= 1 && nums[j] < nums[j - 1]; j--)
    {
        swap(nums[j], nums[j - 1]);
    }
}

// Time Complexity: O(n^2) (worst and average case) n (best case)
// Worst case: sorted in descending order, best case: sorted in ascending order)
// Space Complexity: O(1)
