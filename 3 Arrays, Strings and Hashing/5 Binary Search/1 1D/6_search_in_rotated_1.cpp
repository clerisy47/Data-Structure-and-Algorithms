// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal
int search(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int l = 0, r = n - 1; l <= r;)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == k)
            return mid;

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
    return -1;
}

// TC: O(logN)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}