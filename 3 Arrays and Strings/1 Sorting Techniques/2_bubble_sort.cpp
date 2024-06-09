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
        bool swapped = false; // so that when the array is alread sorted, no need to loop again after looping once
        for (int j = 0; j <= nums.size() - 1 - j - 1; j++)
        { // Upto n-1-j-1 because we are taking nums[j] and nums[j+1]
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swapped = true;
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

    bool swapped = false;
    for (int j = 0; j < n - 1; j++)
    {
        if (nums[j] > nums[j + 1])
        {
            int temp = nums[j + 1];
            nums[j + 1] = nums[j];
            nums[j] = temp;
            swapped = true;
        }
    }
    if (!swapped)
        return;
    bubble_sort(nums, n - 1);
}
