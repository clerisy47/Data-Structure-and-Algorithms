// There are 𝑁≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30]
// representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available.
// Find two workers that are best for the job — maximize the number of days when both these workers are available.

// Brute force and better approach input nested arrays and use intersection of two arrays from arrays foler (worst case: O(N^2*30))

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n_workers;
    cin >> n_workers;
    vector<int> masks(n_workers);

    for (int i = 0; i <= n_workers - 1; i++)
    {
        int n_days;
        cin >> n_days;
        // representing number of days with a single number
        int mask = 0;
        for (int j = 0; j <= n_days - 1; j++)
        {
            int day;
            cin >> day;
            mask = mask | 1 << day;
        }
        masks[i] = mask;
    }

    int max_days = 0, worker_1, worker_2;
    for (int i = 0; i <= n_workers - 1; i++)
    {
        for (int j = i+1; j <= n_workers - 1; j++)
        {
            int curr_days = __builtin_popcount(masks[i] & masks[j]);
            if (curr_days > max_days)
            {
                max_days = curr_days;
                worker_1=i;
                worker_2=j;
            }
        }
    }
    cout << max_days<<" "<<worker_1<<" "<< worker_2;
    return 0;
}