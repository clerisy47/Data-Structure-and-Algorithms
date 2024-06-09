// https://leetcode.com/problems/insert-interval/description/
// https://leetcode.com/problems/merge-intervals/

// edge case: in this question even if intervals are just touching it's considered to be overlapping
// for merge interval just insert the first element of intervals to the intervals (or you can even reduce it by inserting output.back() array on each iteration)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
{
    // sort(intervals.begin(), intervals.end());
    vector<vector<int>> output;
    for (auto &it : intervals)
    {
        // non overlapping cases
        if (it[1] < newInterval[0])
        {
            output.push_back(it);
        }
        else if (it[0] > newInterval[1])
        {
            output.push_back(newInterval);
            newInterval = it;
        }
        // overlapping case
        else
        {
            newInterval[0] = min(newInterval[0], it[0]);
            newInterval[1] = max(newInterval[1], it[1]);
        }
    }
    output.push_back(newInterval);
    return output;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}