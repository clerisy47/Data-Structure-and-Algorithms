#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> countFreq(vector<int> nums)
{
    unordered_map<int, int> counter;
    for (int i = 0; i < nums.size(); i++)
    {
        counter[nums[i]]++;
    }
    return counter;
}
// TC: O(n) (worst case O(n^2) in case of collision) (if used ordered maps o(nlogn) everytime)
// SC: O(n)

// array hashing (if elements are whole numbers)
vector<int> count_freq(vector<int> v)
{
    int max_elem=0;
    for(int x:v) max_elem = max(max_elem, x);

    vector<int> counter(max_elem+1); // Since elements starts from 0
    // // or vector<int> counter(INT_MAX)
    for (int i = 0; i <= v.size()-1; i++)
    {
        counter[v[i]]++;
    }
    return counter;
}
// TC: O(n)/O(n^2)
// SC: O(n)

int main()
{
    return 0;
}
