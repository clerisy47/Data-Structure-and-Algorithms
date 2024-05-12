#include <bits/stdc++.h>
using namespace std;

// brute force: lienar search
// better : binary search on individual rows

// Optimal
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0, r = n * m - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int ele = matrix[mid / m][mid % m];
        if (ele == target)
            return true;
        else if (ele > k)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}
// TC: log2(n*m)
// SC: O(1)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}