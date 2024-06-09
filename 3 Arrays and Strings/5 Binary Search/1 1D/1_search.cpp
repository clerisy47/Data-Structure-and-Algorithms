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

    for (int i = 0, j = n - 1; i <= j;)
    {
        // int mid = (i+j)/2;
        // int mid = i + (j-i)/2; //(avoids overflow_error)
        int mid = i + ((j - i) >> 1); // optimized using bit operator
        if (arr[mid] == k)
            return mid;
        else if (arr[mid]>k)
            j = mid - 1; // eleiminating j side
        else
            i = mid + 1;
    }
    return -1;
}
// Time Complexity: O(logn)

int recursiveBinarySearch(int k, vector<int> &arr, int i, int j)
{
    int answer;
    if (i > j)
        return -1;
    int mid = i + (j - i) / 2;
    if (arr[mid]==k)
        return mid;
    else if ( arr[mid]>k)
        return recursiveBinarySearch(k, arr, i, mid - 1);
    else
        return recursiveBinarySearch(k, arr, mid + 1, j);
    return answer;
}
