// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    string r;
    int n = s.size();
    for (int i = 0; i <= n - 1; i++)
    {
        if (r.size() && s[i] == r.back())
        {
            r.pop_back();
        }
        else
        {
            r.push_back(s[i]);
        }
    }
    return r;
}