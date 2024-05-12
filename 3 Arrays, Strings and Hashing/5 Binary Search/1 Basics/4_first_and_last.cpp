// Find the first and last occurrence of ‘k’ in 'arr'.

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
    int left = 0, right = n - 1, first = -1, last = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k)
        {
            if (mid == 0 || arr[mid - 1] != k)
            {
                first = mid;
                break;
            }

            right = mid - 1; // going left to get smallest index
        }
        else if (arr[mid] > k)
            right = mid - 1;
        else
            left = mid + 1;
    }

    if (first == -1)
        return {-1, -1};

    left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k)
        {
            if (mid == n-1 || arr[mid + 1] != k)
            {
                last = mid;
                break;
            }
            left = mid + 1; // going right to get largest index
        }
        else if (arr[mid] > k)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return {first, last};
}
// TC : 2logn

int main()
{

    return 0;
}