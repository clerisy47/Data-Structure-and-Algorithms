// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string str, int k)
{
    int maxWindow = 0;
    bool hasKsubst = false;
    for (int i = 0; i <= str.size() - 1; i++)
    {
        set<char> hash;
        for (int j = i; j <= str.size() - 1; j++)
        {
            hash.insert(str[j]);
            if (hash.size() >= k)
                hasKsubst = true;
            if (hash.size() > k)
            {
                break;
            }
            maxWindow = max(maxWindow, j - i + 1);
        }
    }
    if (hasKsubst == true)
        return maxWindow;
    return -1;
}

int longestKSubstr(string str, int k)
{
    int maxWindow = 0;
    bool hasKsubst = false;
    unordered_map<char, int> hash;
    for (int l = 0, r = 0; r <= str.size() - 1; r++)
    {
        hash[str[r]]++;
        if (hash.size() >= k)
            hasKsubst = true;
        if (hash.size() > k)
        {
            hash[str[l]]--;
            if (hash[str[l]] == 0)
                hash.erase(str[l]);
            l++;
        }
        maxWindow = max(maxWindow, r - l + 1);
    }

    if (hasKsubst == true)
        return maxWindow;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}