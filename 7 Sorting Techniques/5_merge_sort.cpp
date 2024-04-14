// Divide and Conquer Strategy

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int left, int mid, int right)
{
    vector<int> temp;
    int i = left;    // pointer that points from left of array to the mid
    int j = mid + 1; // pointer that points from mid+1 of the array to the right
    while (i <= mid && j <= right)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= right)
    {
        temp.push_back(nums[j]);
        j++;
    }

    for (i = left; i <= right; i++)
    {
        nums[i] = temp[i - left];
    }
}
void merge_sort(vector<int> &nums, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = (left + right) / 2;
    merge_sort(nums, left, mid);
    merge_sort(nums, mid + 1, right);
    merge(nums, left, mid, right);
}

// Time Complexity: O(nlogn) (worst, average case and best case)
// Because it divides n arrays to logn subarrays
// Space complexity: O(n)
// Because an extra array is used to store the merged array
