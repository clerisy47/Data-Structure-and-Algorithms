// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int> &arr, int n, int m)
{
    sort(arr.begin(), arr.end());
    int minDiff = 1e9;
    for (int i = 0, j = m-1; j <= n - 1; i++, j++)
    {
        int currDiff = arr[j] - arr[i];
        if (currDiff < minDiff)
            minDiff = currDiff;
    }
    return minDiff;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}