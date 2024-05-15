// https://leetcode.com/problems/binary-search

#include <bits/stdc++.h>
using namespace std;

// Unsorted arrays
int linearSearch(int k, vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == k)
            return i;
    }
    return -1;
}
// Time Complexity: O(n)

// Sorted arrays
int binarySearch(int k, vector<int> &arr)
{
    int n = arr.size();

    for (int left = 0, right = n - 1; left <= right;)
    {
        // int mid = (left+right)/2;
        // int mid = left + (right-left)/2; //(avoids overflow_error)
        int mid = left + ((right - left) >> 1); // optimized using bit operator
        if (arr[mid] == k)
            return mid;
        else if (k < arr[mid])
            right = mid - 1; // eleiminating right side
        else
            left = mid + 1;
    }
    return -1;
}
// Time Complexity: O(logn)

int recursiveBinarySearch(int k, vector<int> &arr, int left, int right)
{
    int answer;
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (k == arr[mid])
        return mid;
    else if (k < arr[mid])
        return recursiveBinarySearch(k, arr, left, mid - 1);
    else
        return recursiveBinarySearch(k, arr, mid + 1, right);
    return answer;
}
