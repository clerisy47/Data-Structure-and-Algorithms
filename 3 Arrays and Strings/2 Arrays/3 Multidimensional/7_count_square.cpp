// https://leetcode.com/problems/count-square-submatrices-with-all-ones/

#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>> &matrix)
{
    int ctr = 0;
    for (int i = 0; i <= matrix.size() - 1; i++)
    {
        for (int j = 0; j <= matrix[0].size() - 1; j++)
        {
            if (i != 0 && j != 0 && matrix[i][j] != 0)
            {
                matrix[i][j] = 1 + min(matrix[i - 1][j - 1], min(matrix[i - 1][j], matrix[i][j - 1]));
            }
            ctr += matrix[i][j];
        }
    }
    return ctr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}