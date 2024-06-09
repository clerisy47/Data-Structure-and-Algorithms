// https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>
using namespace std;

int maxCows(vector<int> &stalls, int minDistance)
{
    int ctr = 1; // first cow will be placed at the first
    for (int i = 0, j=0; j <= stalls.size() - 1; j++)
    {
        int currDistance = stalls[j] - stalls[i];
        if (currDistance >= minDistance)
        {
            ctr++;
            i=j;
        }
    }
    return ctr;
}

int solve(int n, int k, vector<int> &stalls)
{
    sort(stalls.begin(), stalls.end());
    int ans = -1;
    for (int i = 1, j = stalls[n - 1] - stalls[0]; i <= j;)
    {
        int mid = (i + j) / 2;
        int max_cows = maxCows(stalls, mid);
        if (max_cows >= k)
        {
            ans = mid;
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}