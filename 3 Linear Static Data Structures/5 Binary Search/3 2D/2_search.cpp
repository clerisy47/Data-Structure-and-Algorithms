// https://leetcode.com/problems/search-a-2d-matrix/

#include <bits/stdc++.h>
using namespace std;

// brute force: lienar search
// better : binary search on individual rows

// Optimal
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
            j = i - 1;
        else
            i = i + 1;
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