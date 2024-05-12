// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s

#include <bits/stdc++.h>
using namespace std;

// maximum ones in sorted array = minimum index of first 1
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{

    int mini = -1, minidx = 1e9; // if no ones than return -1
    for (int i = 0; i <= n - 1; i++)
    {
        int idx = lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin();
        if (idx != m && idx < minidx)
        {
            minidx = idx;
            mini = i;
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