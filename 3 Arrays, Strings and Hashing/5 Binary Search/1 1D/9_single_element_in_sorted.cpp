// https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;

// can be done with xor by O(n)

// index even odd
int singleNonDuplicate(vector<int> &arr)
{
    int n = arr.size();
    // Edge cases:
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];

    for (int l = 0, r = n - 1; l <= r;)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            return arr[mid];
        }
        // left of single element
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1]))
        {
            l = mid + 1;
        }
        // right of single element
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}