// floor and ceil are elements and not indexes
// floor: largest element such that x<=k (target)
// ceil: smallest element such that x]>=k (target)

#include <bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal:

int getFloor(vector<int> &arr, int k)
{
    int n = arr.size();
    int left = 0, right = n - 1, answer = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= k)
        {
            if (mid == n - 1 || arr[mid + 1] > k)
                return arr[mid];
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return -1;
}

// ceil is basically element in lower bound

int main()
{

    return 0;
}