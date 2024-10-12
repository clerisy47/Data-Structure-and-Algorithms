// https://www.naukri.com/code360/problems/next-greater-element_799354
// https://www.naukri.com/code360/problems/next-smaller-element_1112581

// Stacks can be replaced by vectors

#include <bits/stdc++.h>
using namespace std;

// brute
vector<int> nextGreater(vector<int> &a, int n)
{
    vector<int> r(n, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[i] < a[j])
            {
                r[i] = a[j];
                break;
            }
        }
    }
    return r;
}

// Optimal
// using stack
vector<int> nextGreaterElement(vector<int> &a, int n)
{
    stack<int> st;
    vector<int> r(n);
    for (int i = n - 1; i >= 0; i--)
    {
        // For next smaller element (st.size() && st.top() >= a[i])
        while (st.size() && st.top() <= a[i])
        {
            st.pop();
        }
        r[i] = st.size() ? st.top() : -1;
        st.push(a[i]);
    }
    return r;
}
// Time Complexity: O(2n)

// using vector
vector<int> nextGreaterElement(vector<int> &a, int n)
{
    vector<int> v;
    vector<int> r(n);
    for (int i = n - 1; i >= 0; i--)
    {
        for (; v.size() && v.back() <= a[i]; v.pop_back()) // For next smaller element (st.size() && st.top() >= a[i])
        {
        }
        if (v.size() == 0)
        {
            r[i] = -1;
        }
        else
        {
            r[i] = v.back();
        }
        v.push_back(a[i]);
    }
    return r;
}

class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
    }
};

int main()
{

    return 0;
}