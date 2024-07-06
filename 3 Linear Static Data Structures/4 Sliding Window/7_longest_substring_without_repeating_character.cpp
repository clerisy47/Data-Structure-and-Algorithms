// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <iostream>
#include <map>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int n = s.size(), length = 0, maxLength = 0;
    map<char, int> hash;
    for (int i = 0, j = 0; j <= n - 1; j++)
    {
        if (hash.find(s[j]) != hash.end() && hash[s[j]] >= i) // &&hash[s[j]]>=i to ensure indexes before the window not to be considered
        {
            i = hash[s[j]] + 1;
        }
        hash[s[j]] = j;
        length = j - i + 1;
        maxLength = max(maxLength, length);
    }
    return maxLength;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1 = "abcabcbb";
    cout << lengthOfLongestSubstring(s1) << endl;

    return 0;
}