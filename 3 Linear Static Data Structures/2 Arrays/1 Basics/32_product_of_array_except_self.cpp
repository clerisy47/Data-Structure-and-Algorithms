// https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
using namespace std;

// using divison operator
vector<int> productExceptSelf(vector<int> &a)
{
    int prod = 1, n = a.size(), prod1 = 1;
    vector<int> r(n);
    for (int i = 0; i <= n - 1; i++)
    {
        prod *= a[i];
        prod1 *= a[i] ? a[i] : 1;
    }
    if (count(a.begin(), a.end(), 0) > 1)
    {
        prod1 = 0;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] == 0)
        {
            r[i] = prod1;
        }
        else
        {
            r[i] = prod / a[i];
        }
    }
    return r;
}

// using division operator
// modified prefix/suffix algorithm so that first element contains 1 and not the first element itself
vector<int> productExceptSelf(vector<int> &a)
{
    int n = a.size();
    vector<int> pref(n), suff(n), r(n);
    pref[0] = 1;
    suff[n - 1] = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        pref[i] = a[i - 1] * pref[i - 1];
        suff[n - 1 - i] = a[n - i] * suff[n - i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        r[i] = pref[i] * suff[i];
    }
    return r;
}

// optimised space