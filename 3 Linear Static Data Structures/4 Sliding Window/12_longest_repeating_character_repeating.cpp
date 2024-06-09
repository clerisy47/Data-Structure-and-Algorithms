// https://leetcode.com/problems/longest-repeating-character-replacement/submissions/1259586376/

#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string str, int k)
{
    int max_window = 0;
    for (int i = 0; i <= str.size() - 1; i++)
    {
        vector<int> hash(26);
        int maxFreq = 0;
        for (int j = i; j <= str.size() - 1; j++) // instead of j=i, we should check from j=0
        {
            hash[str[j] - 'A']++;
            maxFreq = max(maxFreq, hash[str[j] - 'A']);
            if (j - i + 1 - maxFreq > k) // no of replacements
                break;
            max_window = max(max_window, j - i + 1);
        }
    }
    return max_window;
}

int characterReplacement(string str, int k)
{
    int max_window = 0;
    vector<int> hash(26);
    int maxFreq = 0;
    for (int i = 0, j = 0; j <= str.size() - 1; j++)
    {
        hash[str[j] - 'A']++;
        maxFreq = max(maxFreq, hash[str[j] - 'A']);
        if (j - i + 1 - maxFreq > k) // no of replacements // while is replaced by if as we're only looking for the longest
        {
            hash[str[i] - 'A']--;
            i++;
        }
        max_window = max(max_window, j - i + 1);
    }
    return max_window;
}
// TC: O(n) (Using while loop is O(2n))
// SC: O(1)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}