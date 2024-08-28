// 13, 46, 24, 52, 20, 9
// compares 13 and 46 (bubbles it)
// No swapping as they are in order
// 9, 46, 24, 52, 20, 13
// Selects the second minimum number: 13
// Swaps 46 and 12
// 9, 13, 24, 52, 20, 46
// After one iteration: 13,24,46, 20, 9, 52
// On one iteration, the maximum number will go to its desired place
//(just inverse of selection sort)

// Iterative approach

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &nums)
{
    for (int i = 0; i <= nums.size() - 2; i++)
    {
        for (int j = 0; j <= nums.size() - 2 - i; j++)
        { // Upto n-2-j because we are taking nums[j] and nums[j+1]
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

// Time Complexity: O(n^2) (worst and average case) O(n) (best case)
// worst case: sorted in descending order, best case: sorted in ascending order
// Space Complexity: O(1)

// Recursive Approach

void bubble_sort(vector<int> &nums, int n)
{
    if (n == 1)
    {
        return;
    }

    bool swapped = false; // so that if swap didn't happen stop the loop. (could have been done in the iterative approach as well)
    for (int j = 0; j < n - 1; j++)
    {
        if (nums[j] > nums[j + 1])
        {
            swap(nums[j], nums[j + 1]);
        }
    }
    if (!swapped)
        return;
    bubble_sort(nums, n - 1);
}
