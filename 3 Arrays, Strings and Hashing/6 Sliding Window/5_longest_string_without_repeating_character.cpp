// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int n = s.size(), length = 0, maxLength = 0;
    map<char, int> hash;
    for (int l = 0, r = 0; r <= n - 1; r++)
    {
        if (hash.find(s[r]) != hash.end()&&hash[s[r]]>=l) // &&hash[s[r]]>=l to ensure indexes before the window not to be considered
        {
            l = hash[s[r]] + 1;
        }
        hash[s[r]] = r; 
        length = r - l + 1;  
        maxLength = max(maxLength, length);
    }
    return maxLength;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}