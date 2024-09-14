// https://www.naukri.com/code360/problems/next-greater-element_799354
// https://www.naukri.com/code360/problems/next-smaller-element_1112581

#include <bits/stdc++.h>
using namespace std;

// Brute Force: Run two for loops for next greater element and push it to array

// Optimal
vector<int> nextGreaterElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i]) // For next smaller element (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            output[i] = -1;
        }
        else
        {
            output[i] = st.top();
        }
        st.push(arr[i]);
    }
    return output;
}
// Time Complexity: O(2n)

int main()
{

    return 0;
}