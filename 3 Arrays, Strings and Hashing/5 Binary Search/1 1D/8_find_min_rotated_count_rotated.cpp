// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
// https://www.geeksforgeeks.org/problems/rotation4723/1

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr)
{
    int ans = 1e9;
    int n = arr.size();
    for (int l = 0, r = n - 1; l <= r;)
    {
        int mid = l + (r - l) / 2;
        // left sorted
        if (arr[mid] >= arr[l])
        {
            ans = min(ans, arr[l]);
            l = mid + 1;
        }
        // right sorted
        else
        {
            ans = min(ans, arr[mid]); // also include mid as mid is the part of sorted array
            r = mid - 1;
        }
    }
    return ans;
}

// number of right rotations is basically index of minimum element in rotated array
int findKRotation(vector<int> &arr)
{
    int ans = 1e9, mini;
    int n = arr.size();
    for (int l = 0, r = n - 1; l <= r;)
    {
        int mid = l + (r - l) / 2;
        // left sorted
        if (arr[mid] >= arr[l])
        {
            if (arr[l] < ans)
            {
                ans = arr[l];
                mini = l;
            }
            l = mid + 1;
        }
        // right sorted
        else
        {
            if (arr[mid] < ans)
            {
                ans = arr[mid];
                mini = mid;
            }
            r = mid - 1;
        }
    }
    return mini;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}