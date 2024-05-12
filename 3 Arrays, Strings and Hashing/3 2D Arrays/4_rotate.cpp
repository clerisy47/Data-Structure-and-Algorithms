// Compulsorily a square matrix unlike transpose proble,

#include <bits/stdc++.h>
using namespace std;

// Brute Force (Optimial for non Square Matrix)
void rotateMatrix(vector<vector<int>> &a)
{
    int r1 = a.size();
    int c1 = a[0].size();
    vector<vector<int>> rotated(c1, vector<int>(r1));
    for (int i = 0; i <= c1 - 1; i++)
    {
        for (int j = 0; j <= r1 - 1; j++)
        {
            rotated[i][j] = a[r1 - 1 - j][i]; // modifying transpose function by a little
        }
    }
    a = rotated;
}
// TC: O(n*m)
// SC: O(n*m)

// Optimal (For Square Matrix)
void transpose(vector<vector<int>> &a)
{
    int r1 = a.size();
    int c1 = a[0].size();
    for (int i = 0; i <= c1 - 1; i++)
    {
        for (int j = i+1; j <= r1 - 1; j++)
        {
                swap(a[i][j], a[j][i]); // Upper diagonal elements
        }
    }
}

void rotateMatrix(vector<vector<int>> &a)
{
    transpose(a);
    for (int i = 0; i <= a.size() - 1; i++)
    {
        reverse(a[i].begin(), a[i].end());
    }
}
// TC: O((n^2-n)/2+n^2/2)= O(n^2-n/2)
// SC: O(1)

int main()
{

    return 0;
}