// Divide and Conquer Strategy
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int left, int right)
{
    int pivot = nums[right];
    int i = left - 1;
    for (int j = left; j <= right; j++)
    { // Here i denotes number righter to the last smaller number
        if (nums[j] < pivot)
        {
            i++;
            swap(nums[i], nums[j]); // if first numbers are shorted, they swaps with themselves.
        }
    }
    swap(nums[i + 1], nums[right]);
    return i + 1;
}
void quick_sort(vector<int> &nums, int left, int right)
{
    if (left >= right)
        return;
    int partition_index = partition(nums, left, right);
    quick_sort(nums, left, partition_index - 1);
    quick_sort(nums, partition_index + 1, right);
}

// Time Complexity: O(nlogn) (average case and best case) O(n^2) (worst case)
// Worst case when we select wrong pivot eg when the array is already sorted and we select the first element as pivot
// Space complexity: O(logn) (best case) O(n) (worst case)
