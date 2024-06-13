// https://leetcode.com/problems/subsets/description/

#include <bits/stdc++.h>
using namespace std;

// recursion method in recursion folder

vector<vector<int>> powerSet(vector<int> &arr)
{
    vector<vector<int>> output;
    int n = arr.size();
    int power_2 = 1 << n;
    for (int i = 0; i <= power_2 - 1; i++)
    {
        vector<int> sub_arr;
        for (int j = 0; j <= n - 1; j++)
        {
            if (i & (1 << j))
                sub_arr.push_back(arr[j]);
        }
        output.push_back(sub_arr);
    }
    return output;
}

// TC: O(n*2^n)
// SC: O(1)

int main()
{

    return 0;
}