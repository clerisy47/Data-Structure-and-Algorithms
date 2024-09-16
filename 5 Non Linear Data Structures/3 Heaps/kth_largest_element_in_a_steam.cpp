// https://leetcode.com/problems/kth-largest-element-in-a-stream

// Anything that can be done through priority queue can also be done through multiset in similar time

#include <bits/stdc++.h>
using namespace std;

class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
    KthLargest(int k, vector<int> nums)
    {
        this->k = k;
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
    }

    int add(int val)
    {
        pq.push(val);
        if (pq.size() > k)
        {
            pq.pop();
        }
        return pq.top();
    }
};

class KthLargest
{
public:
    multiset<int> ms;
    int k;
    KthLargest(int k, vector<int> nums)
    {
        this->k = k;
        for (int i = 0; i < nums.size(); i++)
        {
            ms.insert(nums[i]);
            if (ms.size() > k)
            {
                ms.erase(ms.begin());
            }
        }
    }

    int add(int val)
    {
        ms.insert(val);
        if (ms.size() > k)
        {
            ms.erase(ms.begin());
        }
        return *ms.begin();
    }
};