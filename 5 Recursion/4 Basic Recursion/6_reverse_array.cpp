#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &nums)
{
    static int i = 0;
    if (i >= nums.size() / 2)
    {
        return;
    }
    swap(nums[i], nums[nums.size() - 1 - i]);
    i++;
    reverse(nums);
}
// Time Complexity: O(n)