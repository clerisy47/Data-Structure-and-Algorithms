// https://leetcode.com/problems/find-peak-element/

// according to question, there are no equal elements in array

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 0;

    if (arr[0] > arr[1])
    {
        return 0;
    }
    if (arr[n - 1] > arr[n - 2])
    {
        return n - 1;
    }
    for (int i = 1, j = n - 2; i <= j;)
    {
        int mid = (i + j) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1; // this statement has no use just writing because compiler gives error without return statement
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}