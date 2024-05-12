#include <bits/stdc++.h>
using namespace std;

bool comparator(vector<int> &a1, vector<int> &a2)
{
    return a1[2] > a2[2];
}
vector<int> jobScheduling(vector<vector<int>> &arr) // id, deadline, profit
{
    int max_deadline = 0;
    for (auto &it : arr)
    {
        if (it[1] > max_deadline)
            max_deadline = it[1];
    }
    vector<int> jobsAssign(max_deadline + 1); // 1 based indexing
    sort(arr.begin(), arr.end(), comparator);
    int totalProfit = 0, jobCount = 0;
    for (auto &it : arr)
    {
        int deadline = it[1];
        int profit = it[2];
        for (int i = deadline; i >= 1; i--)
        {
            if (!jobsAssign[i])
            {
                jobsAssign[i] = profit;
                totalProfit += profit;
                jobCount++;
                break;
            }
        }
    }
    return {jobCount, totalProfit};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}