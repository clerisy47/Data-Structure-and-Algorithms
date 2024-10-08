// https://leetcode.com/problems/two-sum/
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include <bits/stdc++.h>
using namespace std;

// brute force
class Solution
{
public:
    vector<int> twoSum(vector<int> &a, int t)
    {
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i + 1; j < size(a); j++)
            {
                if (a[i] + a[j] == t)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// hashing (optimal for unsorted arrays)
class Solution
{
public:
    vector<int> twoSum(vector<int> &a, int t)
    {
        map<int, int> m;
        for (int i = 0; i < a.size(); i++)
        {
            if (m.find(t - a[i]) != m.end())
            {
                return {i, m[t - a[i]]};
            }
            m[a[i]] = i;
        }
        return {};
    }
};

// two pointer(optimal for sorted arrays)
class Solution
{
public:
    vector<int> twoSum(vector<int> &a, int t)
    {
        for (int i = 0, j = (int)a.size() - 1; i < j;)
        {
            if (a[i] + a[j] == t)
            {
                return {i + 1, j + 1}; // return 1 based index
            }
            else if (a[i] + a[j] < t)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {};
    }
};