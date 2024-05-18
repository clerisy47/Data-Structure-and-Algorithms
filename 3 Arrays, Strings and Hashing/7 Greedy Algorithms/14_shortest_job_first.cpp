// https://www.geeksforgeeks.org/problems/shortest-job-first/1

//  Shortest Job First (SJF) CPU Scheduling

// Arrival time of all process is 0 given time is Burst time

#include <bits/stdc++.h>
using namespace std;

long long averageWaitingTime(vector<int> &time)
{
    long long wt = 0, total_wt = 0; // here wt means waiting time
    sort(time.begin(), time.end());
    for (int i = 1; i <= time.size() - 1; i++) // first process's waiting time is 0 so, it's not considered
    {
        wt += time[i - 1]; // Adding time of all processes except last one (since no process after it is to wait for it)
        total_wt += wt;    // Adding the waiting time as question is asking for average of all waiting time
    }
    return total_wt / time.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}