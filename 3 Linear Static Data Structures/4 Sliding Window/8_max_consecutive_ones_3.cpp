// https://leetcode.com/problems/max-consecutive-ones-iii/

#include <bits/stdc++.h>
using namespace std;

// brute force
int longestOnes(vector<int> &arr, int k)
{
    int max_window = 0;
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        int curr_zeroes = 0;
        for (int j = i; j <= arr.size() - 1; j++)
        {
            if (arr[j] == 0)
            {
                curr_zeroes++;
            }
            if (curr_zeroes > k)
            {
                break;
            }
            max_window = max(max_window, j - i + 1);
        }
    }
    return max_window;
}
// TC: O(n^2)

// optimal
int longestOnes(vector<int> &arr, int k)
{
    int curr_zeroes = 0, max_window = 0;
    for (int l = 0, r = 0; r <= arr.size() - 1; r++)
    {
        if (arr[r] == 0)
        {
            curr_zeroes++;
        }
        if (curr_zeroes > k) // while is replaced by if as we're only looking for the longest
        {
            if (arr[l] == 0)
            {
                curr_zeroes--;
            }
            l++;
        }
        max_window = max(max_window, r - l + 1);
    }
    return max_window;
}
// TC: O(n) (Using while loop is O(2n))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}