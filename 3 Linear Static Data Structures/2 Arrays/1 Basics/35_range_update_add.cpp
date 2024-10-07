// https://leetcode.com/problems/range-addition/description/ (premium)
// https://www.hackerrank.com/challenges/crush/problem

#include <bits/stdc++.h>

using namespace std;

// difference array algorithm
// this will work even if array a is given and not filled with zeroes
// we can do this also for xor and not only for sum
long arrayManipulation(int n, vector<vector<int>> ops)
{
    vector<long> a(n);
    vector<long> t(n + 2); // one empty at front and one at back for 1 based indexing and making sure a[n] works
    for (long i = 0; i < ops.size(); i++)
    {
        t[ops[i][0]] += ops[i][2];
        t[ops[i][1] + 1] -= ops[i][2];
    }
    // prefix sum
    for (long i = 1; i < t.size(); i++)
    {
        t[i] += t[i - 1];
    }
    for (long i = 0; i < n; i++)
    {
        a[i] += t[i + 1]; // since a is 0 based and t is 1 based
    }
    return *max_element(a.begin(), a.end());
}
