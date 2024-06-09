// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include <bits/stdc++.h>
using namespace std;

// using lower bound and upper bound
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int lbound = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
    if (arr[lbound] != k || lbound == n)
        return {-1, -1};
    int ubound = upper_bound(arr.begin(), arr.end(), k) - arr.begin();
    return {lbound, ubound - 1};
}
// TC : 2logn

// using binary search
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int first = -1, last = -1;
    for(int i=0, j=n-1; i<=j;)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == k)
        {
            first = mid;
            j = mid - 1; // going i to get smallest index
        }
        else if (arr[mid] > k)
            j = mid - 1;
        else
            i = mid + 1;
    }
    if (first == -1)
        return {-1, -1};
    for(int i=0, j=n-1; i<=j;)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == k)
        {
            last = mid;
            i = mid + 1; // going j to get largest index
        }
        else if (arr[mid] > k)
            j = mid - 1;
        else
            i = mid + 1;
    }
    return {first, last};
}
// TC : 2logn

int main()
{

    return 0;
}