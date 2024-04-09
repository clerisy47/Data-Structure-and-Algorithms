// 13, 46, 24, 52, 20, 9 
// compares 13 and 46 (bubbles it)
// No swapping as they are in order
// 9, 46, 24, 52, 20, 13
// Selects the second minimum number: 13
// Swaps 46 and 12
// 9, 13, 24, 52, 20, 46
// After one iteration: 13,24,46, 20, 9, 52
// On one iteration, the maximum number will go to its desired place
//(just inverse of selection sort)



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void heap_sort(vector<int>& nums)
    {
        for(int i=0; i< nums.size()-1; i++){
            bool swapped = false; // so that when the array is alread sorted, no need to loop again after looping once
            for(int j=0; j<nums.size()-i-1; j++){ // Upto n-i-1 because we are taking nums[i] and nums[i+1]
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    swapped = true;
                }
            }
        }

    }

};
int main()
{
    Solution solution;

    vector<int> nums = {13, 46, 24, 52, 20, 9 };

    solution.heap_sort(nums);

    for(int x: nums){
        cout<< x<< " ";
    }

    return 0;
}

// Time Complexity: O(n^2) (worst and average case) O(n) (best case)
// worst case: sorted in descending order, best case: sorted in ascending order
// Space Complexity: O(1)