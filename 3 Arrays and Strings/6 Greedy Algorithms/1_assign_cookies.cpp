// https://leetcode.com/problems/assign-cookies/description/

#include <bits/stdc++.h>
using namespace std;

int assignCookie(vector<int> &greed, vector<int> &size)
{
    int i = 0, j = 0, n = greed.size(), m = size.size(), ctr = 0;
    sort(greed.begin(), greed.end());
    sort(size.begin(), size.end());
    while (i <= n - 1 && j <= m - 1)
    {
        if (greed[i] <= size[j])
        {
            ctr++;
            i++;
        }
        j++;
    }
    return ctr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}