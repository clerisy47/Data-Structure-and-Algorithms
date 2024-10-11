// https://leetcode.com/problems/4sum/description/

#include <bits/stdc++.h>
using namespace std;

// brute force
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a, int t)
    {
        set<vector<int>> s; // must not contain duplicate
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                for (int k = j + 1; k < a.size(); k++)
                {
                    for (int l = k + 1; l < a.size(); l++)
                    {
                        long long temp = (long long)a[i] + a[j] + a[k] + a[l];
                        if (temp == t)
                        {
                            vector<int> b = {a[i], a[j], a[k], a[l]};
                            sort(b.begin(), b.end());
                            s.insert(b);
                        }
                    }
                }
            }
        }
        return vector(s.begin(), s.end());
    }
};

// brute approach do similarly as three sum

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a, int t)
    {
        vector<vector<int>> b;
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            if (i != 0 && a[i] == a[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < a.size(); j++)
            {
                if (j != i + 1 && a[j] == a[j - 1])
                {
                    continue;
                }
                long long t1 = (long long)t - a[i] - a[j];
                for (int k = j + 1, l = (int)a.size() - 1; k < l;)
                {
                    long long temp = (long long)a[k] + a[l];
                    if (temp == t1)
                    {
                        b.push_back({a[i], a[j], a[k], a[l]});
                        k++;
                        l--;
                        while (k < l && a[k] == a[k - 1])
                            k++;
                        while (k < l && a[l] == a[l + 1])
                            l--;
                    }
                    else if (temp > t1)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }
        return b;
    }
};
