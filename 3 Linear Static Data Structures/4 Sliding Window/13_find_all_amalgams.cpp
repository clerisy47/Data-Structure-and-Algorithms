// https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string a, string b)
{
    vector<int> c(128);
    vector<int> d(128);
    vector<int> r;
    int n = a.size(), o = b.size();
    for (int i = 0; i <= o - 1; i++)
    {
        c[b[i]]++;
    }
    for (int i = 0; i <= o - 1; i++)
    {
        d[a[i]]++;
    }
    if (c == d)
    {
        r.push_back(0);
    }

    for (int i = 1, j = o; j <= n - 1; i++, j++)
    {
        d[a[j]]++;
        d[a[i - 1]]--;
        if (c == d)
        {
            r.push_back(i);
        }
    }
    return r;
}