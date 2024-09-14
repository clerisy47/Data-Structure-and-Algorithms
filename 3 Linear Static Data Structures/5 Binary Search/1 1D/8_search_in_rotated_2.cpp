// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

#include <bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal
bool search(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0, j = n - 1; i <= j;)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == k)
            return true;

        // just add this
        // i-- and j-- won't leave the answer back as arr[mid]!=k by above statement
        // while loop doesn't work as i<=j may be false or they may even go outside the array
        if (arr[i] == arr[mid] && arr[j] == arr[mid])
        {
            i++;
            j--;
            continue;
        }
        // left sorted
        if (arr[mid] >= arr[i])
        {
            if (k < arr[mid] && k >= arr[i]) // if subarray is sorted then only we can check if they lie in the range
                j = mid - 1;

            else
                i = mid + 1;
        }
        // right sorted
        else
        {
            if (k > arr[mid] && k <= arr[j])
                i = mid + 1;

            else
                j = mid - 1;
        }
    }
    return false;
}
// TC: O(logN) for the best and average case. O(N/2) for the worst case. Here, N = size of the given array.


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}