// https://www.geeksforgeeks.org/problems/next-greater-element-2/0

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return {-1};
    deque<int> st;
    vector<int> output(n);
    for (int i = 2 * n - 1; i >= 0; i--) // adding hypothetical indexes in array
    {
        while (!st.empty() && st.back() <= arr[i % n])
        {
            st.pop_back();
        }
        if (i <= n - 1)
        {
            if (st.empty())
            {
                output[i] = -1;
            }
            else
            {
                output[i] = st.back();
            }
        }
        st.push_back(arr[i % n]);
    }
    return output;
}

int main()
{

    return 0;
}