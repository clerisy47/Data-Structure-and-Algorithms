// https://leetcode.com/problems/merge-sorted-array/

#include <bits/stdc++.h>
using namespace std;

// in third vector
class Solution
{
public:
    vector<int> merge(vector<int> &a, int n, vector<int> &b, int o)
    {
        int i = 0, j = 0;
        vector<int> r;
        while (i < a.size() && j < b.size())
        {
            if (a[i] > a[j])
            {
                r.push_back(a[i]);
                i++;
            }
            else
            {
                r.push_back(b[j]);
                j++;
            }
        }
        while (i < a.size())
        {
            r.push_back(a[i]);
        }
        while (j < b.size())
        {
            r.push_back(b[j]);
        }
        return r;
    }
};

// in place replacement
class Solution
{
public:
    void merge(vector<int> &a, int n, vector<int> &b, int o) // given that a has size of n+o-1
    {
        int i = n - 1, j = o - 1, k = n + o - 1;
        while (i > -1 && j > -1)
        {
            if (a[i] > b[j])
            {
                a[k] = a[i];
                k--;
                i--;
            }
            else
            {
                a[k] = b[j];
                k--;
                j--;
            }
        }
        while (i > -1)
        {
            a[k] = a[i];
            k--;
            i--;
        }
        while (j > -1)
        {
            a[k] = b[j];
            k--;
            j--;
        }
    }
};