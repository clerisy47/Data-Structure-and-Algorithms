// https://leetcode.com/problems/range-sum-query-2d-immutable/

#include <bits/stdc++.h>
using namespace std;

// inplace replacement
class NumMatrix
{
public:
    vector<vector<int>> &a;
    NumMatrix(vector<vector<int>> &a) : a(a)
    {
        // making one based indexing
        a.insert(a.begin(), vector<int>(a[0].size()));
        for (int i = 0; i < a.size(); i++)
        {
            a[i].insert(a[i].begin(), 0);
        }
        for (int i = 1; i < a.size(); i++)
        {
            for (int j = 1; j < a[0].size(); j++)
            {
                a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int i, int j, int k, int l)
    {
        i++, j++, k++, l++;
        return a[k][l] - a[k][j - 1] - a[i - 1][l] + a[i - 1][j - 1];
    }
};

// prefix sum
class NumMatrix
{
public:
    vector<vector<int>> prefixSum;
    NumMatrix(vector<vector<int>> &a)
    {
        prefixSum.resize(a.size() + 1, vector<int>(a[0].size() + 1));
        for (int i = 1; i < a.size() + 1; i++)
        {
            for (int j = 1; j < a[0].size() + 1; j++)
            {
                prefixSum[i][j] = prefixSum[i][j - 1] + prefixSum[i - 1][j] - prefixSum[i - 1][j - 1] + a[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int i, int j, int k, int l)
    {
        i++, j++, k++, l++;
        return prefixSum[k][l] + prefixSum[i - 1][j - 1] - prefixSum[i - 1][l] - prefixSum[k][j - 1];
    }
};