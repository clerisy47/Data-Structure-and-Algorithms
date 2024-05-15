// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

#include <bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal
bool search(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int l = 0, r = n - 1; l <= r;)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == k)
            return true;

        // just add this
        // l-- and r-- won't leave the answer back as arr[mid]!=k by above statement
        // while loop doesn't work as l<=r may be false or they may even go outside the array
        if (arr[l] == arr[mid] && arr[r] == arr[mid])
        {
            l++;
            r--;
            continue;
        }
        // left sorted
        if (arr[mid] >= arr[l])
        {
            if (k < arr[mid] && k >= arr[l]) // if subarray is sorted then only we can check if they lie in the range
                r = mid - 1;

            else
                l = mid + 1;
        }
        // right sorted
        else
        {
            if (k > arr[mid] && k <= arr[r])
                l = mid + 1;

            else
                r = mid - 1;
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