#include <bits/stdc++.h>
using namespace std;

#include<stack>
vector<int> nextGreaterElementII(vector<int> &arr)
{
    int n = arr.size();
    if(n==1)
      return {-1};
    stack<int> st;
    vector<int> output(n);
    for (int i = 2 * n - 3; i >= 0; i--) // adding hypothetical indexes in array (n-1+n-1-1) last element mayn't be repeated
    {
        while (!st.empty() && st.top() <= arr[i % n])
        {
            st.pop();
        }
        if (i <= n - 1)
        {
            if (st.empty())
            {
                output[i] = -1;
            }
            else
            {
                output[i] = st.top();
            }
        }
        st.push(arr[i % n]);
    }
    return output;
}

int main()
{

    return 0;
}