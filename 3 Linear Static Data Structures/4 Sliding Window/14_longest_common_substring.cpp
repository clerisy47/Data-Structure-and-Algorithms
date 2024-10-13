
// https://www.geeksforgeeks.org/problems/longest-common-substring1452/1

// more time efficient but less space efficient solution is sliding window technique

#include <bits/stdc++.h>
using namespace std;

// sliding window technique
int longestCommonSubstr(string s, string s1)
{
    int r = 0;
    for (int i = 0, j = 0; j <= s.size() - 1; j++)
    {
        if (search(s1.begin(), s1.end(), s.begin() + i, s.begin() + j + 1) == s1.end())
        {
            i++;
        }
        r = max(r, j - i + 1);
    }
    return r;
}

// TC: O(m^2*n)
// SC: O(1)