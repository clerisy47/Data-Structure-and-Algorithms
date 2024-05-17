// https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include <bits/stdc++.h>
using namespace std;

// brute force: lienar search
// better : binary search on individual rows

// optimal
// (not necessary binary search but a two pointer search approach)
bool searchMatrix(vector<vector<int>> &matrix, int k)
{
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0, j = m - 1; i <= n - 1 && j >= 0;) // the l shaped part is sorted with mid= 0,m-1;
    {
        if (matrix[i][j] == k)
        {
            return true;
        }
        else if (matrix[i][j] > k)
        {
            j--;
        }
        else
        {
            i++;
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