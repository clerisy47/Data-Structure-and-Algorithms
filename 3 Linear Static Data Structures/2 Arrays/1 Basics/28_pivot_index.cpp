// https://leetcode.com/problems/find-pivot-index/description/

#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &v)
{
    int n = v.size();
    vector<int> v1(n), v2(n);
    v1[0] = v[0];
    v2[n - 1] = v[n - 1];
    for (int i = 1; i <= n - 1; i++)
    {
        v1[i] = v1[i - 1] + v[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        v2[i] = v2[i + 1] + v[i];
    }
    int r = -1;
    for (int i = 0; i <= n - 1; i++)
    {
        if (v1[i] == v2[i])
        {
            r = i;
            break;
        }
    }
    return r;
}

// without extra space

int pivotIndex(vector<int> &v)
{
    int n = v.size();
    int t = accumulate(v.begin(), v.end(), 0);
    int t1 = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (2 * t1 == t - v[i])
        {
            return i;
            break;
        }
        t1 += v[i];
    }
    return -1;
}