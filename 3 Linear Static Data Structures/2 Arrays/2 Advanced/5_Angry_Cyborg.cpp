// https://www.codechef.com/practice/course/5-star-and-above-problems/DIFF2500/problems/AGCY

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> solve(int n, vector<pair<int, int>> &queries)
    {
        vector<int> pre(n + 3);
        for (auto &query : queries)
        {
            int x = query.first;
            int y = query.second;
            pre[x]++;
            pre[y + 1] -= y - x + 2;
            pre[y + 2] += y - x + 1;
        }
        for (int i = 1; i < pre.size(); i++)
        {
            pre[i] += pre[i - 1];
        }
        for (int i = 1; i < pre.size(); i++)
        {
            pre[i] += pre[i - 1];
        }
        vector<int> result(n);
        for (int i = 0; i < n; i++)
        {
            result[i] = pre[i + 1];
        }
        return result;
    }
};