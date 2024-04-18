// 13, 46, 24, 52, 20, 9
// gap = n/4 = 6/2 = 3
// if gap =1, it becomes insetion sort
// it solves the problem of high swapping in insertion array when the lowest elemetns being on right side of array

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &nums) // same as insetion sort just replace 1 with gap and add for loop for decreasing gap
{
    for (int gap = nums.size() / 2; gap > 0; gap /= 2)
    {

        for (int i = gap; i <= nums.size() - 1; i++) // unlike bubble sort and selection sort can't ignore the last element but can ignore the first element
        {
            for (int j = i; j >= gap && nums[j] < nums[j - gap]; j--)
            {
                int temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
    }
}

// Time Complexity: n^2 (worst case) n^1.25 average case nlogn (best case)
// Space Complexity: O(1)
