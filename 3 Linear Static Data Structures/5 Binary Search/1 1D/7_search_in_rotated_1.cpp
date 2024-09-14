// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal
int search(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0, j = n - 1; i <= j;)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == k)
            return mid;

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
    return -1;
}

// TC: O(logN)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}