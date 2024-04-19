#include <bits/stdc++.h>
using namespace std;

// Brute Force
bool linear_search(vector<int> &arr, int target)
{
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int longestSuccessiveElements(vector<int> &a)
{
    int max_seq = 1;
    for (int i = 0; i <= a.size() - 1; i++)
    {
        int curr_seq = 1;
        int x = a[i];
        while (linear_search(a, x + 1))
        {
            x++;
            curr_seq++;
        }
        {
        }
        if (curr_seq > max_seq)
            max_seq = curr_seq;
    }

    return max_seq;
}
// TC:O(n^2)
// SC:O(1)

// Better
int longestSuccessiveElements(vector<int> &a)
{
    sort(a.begin(), a.end());
    int max_seq = 1, curr_seq = 1;
    for (int i = 0; i <= a.size() - 2; i++)
    {
        if (a[i + 1] - a[i] == 1)
        {
            curr_seq++;
            if (curr_seq > max_seq)
                max_seq = curr_seq;
        }
        else if (a[i + 1] != a[i]) // while sorted same elements appear consequtively as well
        {
            curr_seq = 1;
        }
    }
    return max_seq;
}
// TC:O(nlogn + n)
// SC:O(1)

// Optimal
int longestSuccessiveElements(vector<int> &a)
{
    if (a.size() == 0)
        return 0;
    unordered_set<int> s(a.begin(), a.end());
    int max_seq = 1;
    for (int it : s)
    {
        int curr_seq = 1;
        int x = it;
        if (s.find(x - 1) == s.end())
        {
            while (s.find(x + 1) != s.end())
            {
                x++;
                curr_seq++;
            }
            if (curr_seq > max_seq)
                max_seq = curr_seq;
        }
    }
    return max_seq;
}
// TC:O(2n) worst case: O(2n^2)
// SC:O(n)

int main()
{

    return 0;
}