// https://leetcode.com/problems/permutations/

#include <bits/stdc++.h>
using namespace std;

// using next_permutation
class Solution
{
public:
    vector<vector<int>> r;
    vector<vector<int>> permute(vector<int> &a)
    {
        sort(a.begin(), a.end());
        r.push_back(a);
        while (next_permutation(a.begin(), a.end())) // next_permutation function is in array folder
        {
            r.push_back(a);
        }
        return r;
    }
};

// it's similar to pick not pick way then loop way
class Solution
{
public:
    vector<int> a;
    vector<vector<int>> r;

    void fun(int i)
    {
        if (i == a.size())
        {
            r.push_back(a);
        }
        for (int j = i; j < a.size(); j++)
        {
            swap(a[i], a[j]);
            fun(i + 1); // i+1 and not j+1
            swap(a[i], a[j]);
        }
    }

    vector<vector<int>> permute(vector<int> &a)
    {
        this->a = a;
        fun(0);
        return r;
    }
};