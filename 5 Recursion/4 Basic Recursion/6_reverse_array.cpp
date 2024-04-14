#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverse(vector<int> &nums)
    {
        static int i = 0;
        if (i >= nums.size() / 2)
        {
            return;
        }
        swap(nums[i], nums[nums.size() - 1- i]);
        i++;
        reverse(nums);
    }
};

int main()
{
    Solution solution;

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    cout << "Original array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    solution.reverse(nums);

    cout << "Reversed array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

// time complexity O(n/2)