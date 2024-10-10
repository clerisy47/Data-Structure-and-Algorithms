// https://www.geeksforgeeks.org/problems/next-greater-element-2/0
// https://leetcode.com/problems/next-greater-element-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &a)
    {
        int n = a.size();
        if (n == 1)
            return {-1};
        stack<int> st;
        vector<int> r(n);
        for (int i = n - 1; i > -1; i--)
        {
            st.push(a[i]);
        }
        for (int i = n - 1; i > -1; i--)
        {
            while (st.size() && a[i] >= st.top())
            {
                st.pop();
            }
            r[i] = st.size() ? st.top() : -1;
            st.push(a[i]);
        }
        return r;
    }
};

// for circular array problems assume n to be 2n, replace a[i] with a[i%n] and make sure to create if conditions for i<=n-1
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &a)
    {
        int n = a.size();
        if (n == 1)
            return {-1};
        stack<int> st;
        vector<int> r(n);
        for (int i = 2 * n - 1; i >= 0; i--) // adding hypothetical indexes in array
        {
            while (st.size() && st.top() <= a[i % n])
            {
                st.pop();
            }
            if (i <= n - 1)
            {
                r[i] = st.size() ? st.top() : -1;
            }
            st.push(a[i % n]);
        }
        return r;
    }
};