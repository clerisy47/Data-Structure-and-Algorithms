// https://www.naukri.com/code360/problems/lower-bound_8165382
// https://www.naukri.com/code360/problems/implement-upper-bound_8165383

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
    int ans = n; // if all elements are smaller than target it returns length of array ie hypothetical index (n)
    for (int i = 0, j = n - 1; i <= j;)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] >= k)
        {
            // if (mid == 0 || arr[mid - 1] < k) // optimal but can't be used in bs in answers problem
            //     return mid;
            ans = mid;
            j = mid - 1;
        }
        else
            i = mid + 1;
    }
    return ans;
}

int upperBound(vector<int> &arr, int k, int n)
{
    int ans = n; // if all elements are smaller than target it returns length of array ie hypothetical index (n)
    for (int i = 0, j = n - 1; i <= j;)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] > k)
        {
            // if (mid == 0 || arr[mid - 1] <= k) // optimal but can't be used in bs in answers problem
            //     return mid;
            ans = mid;
            j = mid - 1;
        }
        else
            i = mid + 1;
    }
    return ans;
}

int main()
{

    return 0;
}