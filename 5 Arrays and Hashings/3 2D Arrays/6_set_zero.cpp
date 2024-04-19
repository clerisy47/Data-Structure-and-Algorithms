#include <bits/stdc++.h>
using namespace std;

// Brute Force
vector<vector<int>> zeroMatrix(vector<vector<int>> &a, int n, int m)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (a[i][j] == 0)
            {
                for (int k = 0; k <= m - 1; k++)
                {
                    if (a[i][k] != 0)
                        a[i][k] = INT_MIN; // can't mark with any other as it may be present in array itself
                }
                for (int k = 0; k <= n - 1; k++)
                {
                    if (a[k][j] != 0)
                        a[k][j] = INT_MIN;
                }
            }
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (a[i][j] == INT_MIN)
            {
                a[i][j] = 0;
            }
        }
    }
    return a;
}
// TC: O(n^2m+m^2n+ n*m)
// SC: O(1)

// Hashing
vector<vector<int>> zeroMatrix(vector<vector<int>> &a, int n, int m)
{
    unordered_set<int> zero_i;
    unordered_set<int> zero_j;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (a[i][j] == 0)
            {
                zero_i.insert(i);
                zero_j.insert(j);
            }
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (zero_i.find(i) != zero_i.end() || zero_j.find(j) != zero_j.end())
            {
                a[i][j] = 0;
            }
        }
    }
    return a;
}
// TC: O(2*n*m) (Worse case could be more due to collision)
// SC: O(n+m)

// Array Hashing
vector<vector<int>> zeroMatrix(vector<vector<int>> &a, int n, int m)
{

    vector<int> row(n);
    vector<int> col(n);
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (row[i] || col[j])
            {
                a[i][j] = 0;
            }
        }
    }

    return a;
}
// TC: O(2*n*m)
// SC: O(n+m)

// Optimal
// Same as array hashing but we are hashing with the first row and column instead
vector<vector<int>> zeroMatrix(vector<vector<int>> &a, int n, int m)
{
    int extra = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (a[i][j] == 0)
            {
                a[0][j] = 0;
                if (i != 0)
                    a[i][0] = 0; // it will be easier if marked by 0 as we don't need to replace 0 with INT_MIN in the first row/column
                else
                    extra = 0; // to avoid collision
            }
        }
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= m - 1; j++)
        {
            if (a[i][j] != 0)
            {
                if (a[0][j] == 0 || a[i][0] == 0)
                {
                    a[i][j] = 0;
                }
            }
        }
    }
    if (extra == 0)
    {

        for (int j = 1; j <= m - 1; j++)
        {
            a[0][j] = 0;
        }
    }
    if (a[0][0] == 0)
    {
        for (int i = 0; i <= n - 1; i++)
        {

            a[i][0] = 0;
        }
    }

    return a;
}

int main()
{

    return 0;
}