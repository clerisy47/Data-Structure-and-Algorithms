// https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr)
{
    for (int i = 1; i <= arr.size() - 1; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

bool isRotatedSorted(vector<int> &arr)
{
    int ctr = 0;
    for (int i = 1; i <= arr.size() - 1; i++)
    {
        if (arr[i] < arr[i - 1])
            ctr++;
    }
    if (arr[0] < arr[arr.size() - 1])
    {
        ctr++;
    }
    return ctr <= 1;
}

int main()
{
    return 0;
}
