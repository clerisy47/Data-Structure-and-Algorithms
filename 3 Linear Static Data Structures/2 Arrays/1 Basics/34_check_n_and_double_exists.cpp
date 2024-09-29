// https://leetcode.com/problems/check-if-n-and-its-double-exist/description/

#include <bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (a[j] == 2 * a[i] && i != j)
            {
                return true;
            }
        }
    }
    return false;
}

bool checkIfExist(vector<int> &a)
{
    int n = a.size();
    map<int, int> m;
    for (int i = 0; i <= n - 1; i++)
    {
        m[a[i]] = i;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (m.find(2 * a[i]) != m.end() && m[2 * a[i]] != i)
        {
            return true;
        }
    }
    return false;
}

bool checkIfExist(vector<int> &a)
{
    int n = a.size();
    set<int> s;
    for (int i = 0; i <= n - 1; i++)
    {
        if (s.find(2 * a[i]) != s.end() || (a[i] % 2 == 0 && s.find(a[i] / 2) != s.end()))
        {
            return true;
        }
        s.insert(a[i]);
    }
    return false;
}