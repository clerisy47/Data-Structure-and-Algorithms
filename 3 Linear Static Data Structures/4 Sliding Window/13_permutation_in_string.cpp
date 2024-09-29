// https://leetcode.com/problems/permutation-in-string/description/

#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string a, string b)
{
    int n = a.size(), o = b.size();
    if (o < n)
    {
        return false;
    }

    vector<int> c(128);
    vector<int> d(128);
    vector<int> r;

    for (int i = 0; i <= n - 1; i++)
    {
        c[a[i]]++;
    }

    for (int i = 0; i <= n - 1; i++)
    {
        d[b[i]]++;
    }

    if (c == d)
    {
        return true;
    }

    for (int i = 1, j = n; j <= o - 1; i++, j++)
    {
        d[b[j]]++;
        d[b[i - 1]]--;
        if (c == d)
        {
            return true;
        }
    }

    return false;
}