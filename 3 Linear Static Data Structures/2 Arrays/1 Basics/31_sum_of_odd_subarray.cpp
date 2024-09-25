// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/description/

#include <bits/stdc++.h>
using namespace std;

int sumOddLengthSubarrays(vector<int> &v)
{
    int n = v.size();
    int r = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        v[i] += v[i - 1];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            if ((i - j + 1) % 2)
            {
                if (i >= 1)
                {
                    r += v[j] - v[i - 1];
                }
                else
                {
                    r += v[j];
                }
            }
        }
    }
    return r;
}
// TC: O(n^2)

int sumOddLengthSubarrays(vector<int> &v)
{
    int n = v.size(), r = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        r += ((n - i) * (i + 1) + 1) / 2 * v[i];
        // ceil of (n-i)*(i+1)/2
        // where (n-i)*(i+1) is the total number of occurrence of ith number in power set of subarrays
        // (n-i) = total subarrays that starts with ith number
        // (i+1) = total subarrays that ends with ith number
    }
    return r;
}
// TC: O(n)
