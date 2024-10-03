// https://www.geeksforgeeks.org/problems/subset-sums2234/1

// If subset sum exists or not in dp folder

#include <bits/stdc++.h>
using namespace std;

// pick not pick
class Solution
{
public:
    vector<int> a;
    vector<int> r;

    void fun(int i, int sum)
    {
        if (i == a.size())
        {
            r.push_back(sum);
            return;
        }

        fun(i + 1, sum + a[i]);

        fun(i + 1, sum);
    }

    vector<int> subsetSums(vector<int> a, int n)
    {
        this->a = a;
        fun(0, 0);
        return r;
    }
};

class Solution
{
public:
    vector<int> a;
    vector<int> r;

    void fun(int i, int sum)
    {

        r.push_back(sum);

        for (int j = i; j < a.size(); j++)
        {
            fun(j + 1, sum + a[j]);
        }
    }

    vector<int> subsetSums(vector<int> a, int n)
    {
        this->a = a;
        fun(0, 0);
        return r;
    }
};