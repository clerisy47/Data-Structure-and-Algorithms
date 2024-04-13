// 13, 46, 24, 52, 20, 9 
// Selects the minimum number: 9
// Swaps 9 and 13
// 9, 46, 24, 52, 20, 13
// Selects the second minimum number: 13
// Swaps 46 and 12
// 9, 13, 24, 52, 20, 46
// And so on



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void selection_sort(vector<int>& nums)
    {
        for(int i=0; i<= nums.size()-2; i++){
            int min_i = i;
            for(int j=i+1; j<=nums.size()-1; j++){
                if(nums[j]<nums[min_i]){
                    min_i = j;
                }
            }
            int temp = nums[i];
            nums[i]= nums[min_i];
            nums[min_i] = temp;
        }

    }

};
int main()
{
    Solution solution;

    vector<int> nums = {13, 46, 24, 52, 20, 9 };

    solution.selection_sort(nums);

    for(int x: nums){
        cout<< x<< " ";
    }

    return 0;
}

// Time Complexity: O(n^2) (best, average and worst case)
// Space Complexity: O(1)