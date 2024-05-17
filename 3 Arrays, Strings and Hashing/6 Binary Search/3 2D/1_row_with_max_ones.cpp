// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

#include <bits/stdc++.h>
using namespace std;

// maximum ones in sorted array = minimum index of first 1
bool searchMatrix(vector<vector<int>> &matrix, int k)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int i = 0, j = n * m - 1;
    for(int i=0, j=n*m-1; i<=j;)
    {
        int mid = i + (j - i) / 2;
        int ele = matrix[mid / m][mid % m];
        if (ele == k)
            return true;
        else if (ele > k)
            j = mid - 1;
        else
            i = mid + 1;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}