// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

#include <bits/stdc++.h>
using namespace std;

// it's similar to pick not pick way then loop way
class Solution
{
public:
    string a;
    string b;
    vector<string> c;
    vector<string> r;
    int n;

    void fun(int i)
    {
        if (i == a.size())
        {
            r.push_back(b);
            return;
        }
        for (int j = 0; j <= c[a[i]].size() - 1; j++)
        {
            b.push_back(c[a[i]][j]);
            fun(i + 1); // i+1 not j+1 like other problems
            b.pop_back();
        }
    }
    vector<string> letterCombinations(string a)
    {
        this->a = a;
        if (a.size() == 0)
        {
            return {};
        }
        c.resize(128);
        c['2'] = "abc";
        c['3'] = "def";
        c['4'] = "ghi";
        c['5'] = "jkl";
        c['6'] = "mno";
        c['7'] = "pqrs";
        c['8'] = "tuv";
        c['9'] = "wxyz";
        fun(0);
        return r;
    }
};