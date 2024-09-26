// https://leetcode.com/problems/search-insert-position/description/

// inserts in sorted array making it sorted again (like a set)

#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &a, int t)
{
    return lower_bound(a.begin(), a.end(), t) - a.begin();
}

int main()
{
    return 0;
}