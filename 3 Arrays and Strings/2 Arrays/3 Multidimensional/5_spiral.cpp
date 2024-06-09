#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &a)
{
    vector<int> output;
    int n = a.size();
    int m = a[0].size();
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            output.push_back(a[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            output.push_back(a[i][right]);
        }
        right--;
        for (int i = right; i >= left&&top <= bottom; i--)
        {
            output.push_back(a[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top&&left <= right; i--)
        {
            output.push_back(a[i][left]);
        }
        left++;
    }
    return output;
}

int main()
{

    return 0;
}