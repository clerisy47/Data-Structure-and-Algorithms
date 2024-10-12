// https://leetcode.com/problems/combination-sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> a;
    vector<int> b;
    vector<vector<int>> r;

    void fun(int i, int sum)
    {
        if (sum == 0)
        {
            r.push_back(b);
            return;
        }
        if (i == a.size() || sum < 0)
        {
            return;
        }

        b.push_back(a[i]);
        fun(i, sum - a[i]);
        b.pop_back();

        fun(i + 1, sum);
    }

    vector<vector<int>> combinationSum(vector<int> &a, int sum)
    {
        this->a = a;
        fun(0, sum);
        return r;
    }
};

class Solution
{
public:
    vector<int> a;
    vector<int> b;
    vector<vector<int>> r;

    void fun(int i, int sum)
    {
        if (sum == 0)
        {
            r.push_back(b);
            return;
        }
        if (sum < 0)
        {
            return;
        }

        for (int j = i; j < a.size(); j++)
        {
            b.push_back(a[j]);
            fun(j, sum - a[j]);
            b.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &a, int sum)
    {
        this->a = a;
        fun(0, sum);
        return r;
    }
};