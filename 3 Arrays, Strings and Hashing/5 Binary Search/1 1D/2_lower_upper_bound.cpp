// search: smallest index such that arr[i]==k (target)
// lower_bound: smallest index such that arr[i]>=k (target)
// lower_bound is also called search insertion position
// upper_bound: smallest index such that arr[i]>k (target)
// if all elements are smaller than target it returns length of array ie hypothetical index (n)
// if multiple elements are present then it returns first index
// for sorted array O(logn) for unsorted array O(n)

#include <bits/stdc++.h>
using namespace std;

// Brute force: 2 pointer linear search

// Binary Search
int lowerBound(vector<int> arr, int n, int k)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= k)
        {
            if (mid == 0 || arr[mid - 1] < k)
                return mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return n; // if all elements are smaller than target it returns length of array ie hypothetical index (n)
}

int upperBound(vector<int> &arr, int k, int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > k)
        {
            if (mid == 0 || arr[mid - 1] <= k)
                return mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return n; // if all elements are smaller than target it returns length of array ie hypothetical index (n)
}

int main()
{

    return 0;
}