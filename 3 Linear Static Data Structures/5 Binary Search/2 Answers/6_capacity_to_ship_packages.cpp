// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

#include <bits/stdc++.h>
using namespace std;

int noOfDaysRequired(vector<int> &weights, int limit)
{
    int ctr = 1, curr_weight = 0;
    for (auto &x : weights)
    {
        curr_weight += x;
        if (curr_weight > limit)
        {
            ctr++;
            curr_weight = x;
        }
    }
    return ctr;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int max = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(), 0);
    int ans;
    for (int i = max, j = sum; i <= j;) // the limits can be bigger but trimming the limits optimizes the code
    {
        int mid = (i + j) / 2;
        int daysRequired = noOfDaysRequired(weights, mid);
        if (daysRequired <= days) // inversely proportional
        {
            ans = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}