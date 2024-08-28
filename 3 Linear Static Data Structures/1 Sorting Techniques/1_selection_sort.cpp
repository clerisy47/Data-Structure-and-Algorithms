// 13, 46, 24, 52, 20, 9
// Selects the minimum number: 9
// Swaps 9 and 13
// 9, 46, 24, 52, 20, 13
// Selects the second minimum number: 13
// Swaps 46 and 12
// 9, 13, 24, 52, 20, 46
// And so on

#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &nums)
{
    for (int i = 0; i <= nums.size() - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= nums.size() - 1; j++)
        {
            if (nums[j] < nums[mini])
            {
                mini = j;
            }
        }
        swap(nums[i], nums[mini]);
    }
}

// Time Complexity: O(n^2) (best, average and worst case)
// Space Complexity: O(1)