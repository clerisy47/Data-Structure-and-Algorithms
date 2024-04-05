#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void map_hashing(vector<int> nums)
    {
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        int max_n= 0, min_n=0;
        for(auto it:count){
            int freq = it.second;
            if (freq > max_n) {
                max_n = freq;
            }
            if (freq < min_n) {
                min_n = freq;
            }
        }
        cout << "The highest frequency element is: " << max_n << "\n";
        cout << "The lowest frequency element is: " << min_n << "\n";
    }
    // vector<int> array_hashing(int n, int x, vector<int> &nums)
    // {
    //     vector<int> ans(n, 0);
    //     for (int i = 0; i < n; i++)
    //     {
    //         ans[nums[i] - 1]++;
    //     }
    //     return ans;
    // }
};
int main() {
    // Sample usage
    Solution solution;

    // Example input
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(5);

    // Calling the map_hashing function
    solution.map_hashing(nums);

    return 0;
}