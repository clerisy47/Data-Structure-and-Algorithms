// https://www.naukri.com/code360/problems/next-greater-element_799354
// https://www.naukri.com/code360/problems/next-smaller-element_1112581

#include <bits/stdc++.h>
using namespace std;

// Brute Force: Run two for loops for next greater element and push_back it to array

// Optimal
vector<int> nextGreaterElement(vector<int> &arr, int n)
{
    deque<int> st;
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.back() <= arr[i]) // For next smaller element (!st.empty() && st.back() >= arr[i])
        {
            st.pop_back();
        }
        if (st.empty())
        {
            output[i] = -1;
        }
        else
        {
            output[i] = st.back();
        }
        st.push_back(arr[i]);
    }
    return output;
}
// Time Complexity: O(2n)

int main()
{

    return 0;
}