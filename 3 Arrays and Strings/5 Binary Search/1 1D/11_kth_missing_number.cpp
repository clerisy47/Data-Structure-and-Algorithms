// https://leetcode.com/problems/kth-missing-positive-number/description/

#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int i, j;
    for (i = 0, j = arr.size()-1; i <= j;)
    {
        int mid = (i + j) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return i+k; // or j+1+k
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}