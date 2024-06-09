// https://leetcode.com/problems/non-overlapping-intervals/description/
// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

#include <bits/stdc++.h>
using namespace std;

// edge case: in this question even intervals are just touching it's considered to be non- overlapping (just opposite to insert and merge intervals)
// intervals scheduling

bool comparator(vector<int> &a1, vector<int> &a2)
{
    return a1[1] < a2[1];
}

int eraseOverlapIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), comparator);
    int ctr = 0;
    int prev = -1e9;
    for (auto it : intervals)
    {
        if (it[0] >= prev)  // since even touching is considered to be non overlapping intervals(in n meetings question this is different)
        {
            ctr++;
            prev = it[1];
        }
    }
    return intervals.size() - ctr; // in n meetings in one room just return ctr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}