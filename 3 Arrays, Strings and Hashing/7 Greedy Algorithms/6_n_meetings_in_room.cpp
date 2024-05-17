// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

#include <bits/stdc++.h>
using namespace std;

int maxMeetings(int start[], int end[], int n)
{
    multimap<int, int> mp;
    for (int i = 0; i <= n - 1; i++)
    {
        mp.insert({end[i], start[i]});
    }
    int prev_end = 0, ctr = 0;
    for (auto it : mp)
    {
        if (it.second > prev_end)
        {
            ctr++;
            prev_end = it.first;
        }
    }
    return ctr;
}

vector<int> vectorMeetings(int start[], int end[], int n)
{
    multimap<int, pair<int, int>> mp; // as multiple meetings may have same starting time we use multimap
    vector<int> output;
    for (int i = 0; i <= n - 1; i++)
    {
        mp.insert({end[i], {start[i], i}});
    }
    int prev_end = 0;
    for (auto &it : mp)
    {
        if (it.second.first > prev_end)
        {
            prev_end = it.first;
            output.push_back(it.second.second + 1);
        }
    }
    return output;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}