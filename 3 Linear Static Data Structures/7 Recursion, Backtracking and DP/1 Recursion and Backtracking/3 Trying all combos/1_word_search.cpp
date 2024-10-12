// https://leetcode.com/problems/word-search/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<char>> a;
    string b;
    vector<vector<bool>> visited;

    // i, j for the board and k pointer for the string
    bool dfs(int i, int j, int k)
    {
        if (k == b.size())
        {

            return true;
        }
        if (i == a.size() || j == a[0].size() || i == -1 || j == -1 || visited[i][j] || a[i][j] != b[k])
        {
            return false;
        }

        visited[i][j] = true;
        bool r = dfs(i + 1, j, k + 1) || dfs(i, j + 1, k + 1) || dfs(i - 1, j, k + 1) || dfs(i, j - 1, k + 1);
        visited[i][j] = false;

        return r;
    }
    bool exist(vector<vector<char>> &a, string b)
    {
        this->a = a;
        this->b = b;
        bool r = false;
        visited.resize(a.size(), vector<bool>(a[0].size()));
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a[0].size(); j++)
            {
                if (dfs(i, j, 0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};