#include <bits/stdc++.h>
using namespace std;

void map_hashing(vector<int> nums)
{
    unordered_map<int, int> counter;
    for (int i = 0; i < nums.size(); i++)
    {
        counter[nums[i]]++;
    }
    int maxFreq = 0, minFreq = nums.size();
    int maxEle, minEle;
    for (auto it : counter)
    {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq)
        {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq)
        {
            minEle = element;
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}
void array_hashing(vector<int> &nums)
{
    vector<int> counter(nums.size()); // Size of hash vector is equal to the maximum number in an array
    for (int i = 0; i <= nums.size()-1; i++)
    {
        counter[nums[i] - 1]++; // Normalizing by -1 since the elements start at 1
    }
    int maxFreq = 0, minFreq = nums.size();
    int maxEle, minEle;
    for (int i = 0; i < counter.size() && counter[i] != 0; i++) // As counter gets initialized to length equal to nums, rest size will be 0
    {
        int count = counter[i];
        int element = i + 1; // Denormalizaing

        if (count > maxFreq)
        {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq)
        {
            minEle = element;
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{

    vector<int> nums = {1, 2, 2, 3, 3, 3};
    cout << "Using map_hashing method:\n";
    map_hashing(nums);

    int n = 6;
    vector<int> nums2 = {1, 2, 2, 3, 3, 3};
    cout << "Using array_hashing method:\n";
    array_hashing(nums2);

    return 0;
}
