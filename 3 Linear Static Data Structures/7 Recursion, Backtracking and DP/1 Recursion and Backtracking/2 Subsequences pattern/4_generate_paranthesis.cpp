// https://leetcode.com/problems/generate-parentheses/description/

#include <bits/stdc++.h>
using namespace std;

// note: total size of string is 2*n containing n '(' and n ')'

class Solution
{
public:
    int n;
    vector<string> r;
    string a;

    void fun(int i, int j)
    {
        if (i == n && j == n)
        {
            r.push_back(a);
            return;
        }

        if (i <= n - 1)
        {
            a.push_back('(');
            fun(i + 1, j);
            a.pop_back();
        }

        if (j <= n - 1 && i > j)
        {
            a.push_back(')');
            fun(i, j + 1);
            a.pop_back();
        }
    }
    vector<string> generateParenthesis(int n)
    {
        this->n = n;
        fun(0, 0);
        return r;
    }
};