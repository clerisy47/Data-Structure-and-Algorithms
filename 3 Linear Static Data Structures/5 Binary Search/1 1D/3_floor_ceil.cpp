// floor and ceil are elements and not indexes
// floor: largest element such that x<=k (target)
// ceil: smallest element such that x]>=k (target)

// https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401

#include <bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal:

int getFloor(vector<int> &arr, int k)
{
    int n = arr.size(), ans = -1;
    for (int i = 0, j = n - 1; i <= j;)
    {
        int mid = i + (j - i) / 2;
        if ( arr[mid]<=k)
        {
            // if (mid == n - 1 || arr[mid + 1] > k) // optimal but can't be used in bs in answers problem
            //     return arr[mid];
            ans = arr[mid];
            i = mid + 1;
        }
        else
            j = mid - 1;
    }
    return ans;
}

// ceil is basically element in lower bound

int main()
{

    return 0;
}