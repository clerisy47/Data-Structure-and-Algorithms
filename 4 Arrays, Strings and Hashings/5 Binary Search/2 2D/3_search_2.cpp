// https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include <bits/stdc++.h>
using namespace std;

// brute force: lienar search
// better : binary search on individual rows

// optimal
// (not necessary binary search but a two pointer search approach)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();
    int row = 0, column = m - 1; // the l shaped part is sorted with mid= 0,m-1;
    while (row <= n - 1 && column >= 0)
    {
        if (matrix[row][column] == target)
        {
            return true;
        }
        else if (matrix[row][column] > target)
        {
            column--;
        }
        else
        {
            row++;
        }
    }
    return false;
}
// TC: n+m

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}