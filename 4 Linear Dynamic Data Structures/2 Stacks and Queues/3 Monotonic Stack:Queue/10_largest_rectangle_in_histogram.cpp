// https://leetcode.com/problems/largest-rectangle-in-histogram/description/

#include <bits/stdc++.h>
using namespace std;

// brute force
int largestRectangleArea(vector<int> &heights)
{
    int max_area = 0;
    int n = heights.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_height = 1e9;
        for (int j = i; j <= n - 1; j++)
        {
            min_height = min(min_height, heights[j]); // smaller height can make maximum rectangle
            max_area = max(max_area, min_height * (j - i + 1));
        }
    }
    return max_area;
}

// optimal
int largestRectangleArea(vector<int> &heights)
{
    stack<int> st;
    int max_area = 0;
    int n = heights.size();
    for (int i = 0; i <= n; i++) // doing it till all heights are tranversed and at i=n we're clearing the stack
    {
        while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) // calculating prev smaller element
        {
            int height = heights[st.top()];
            st.pop();
            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;
            max_area = max(max_area, width * height);
        }
        st.push(i);
    }
    return max_area;
}

// TC: O(N) + O (N)
// SC: O(N)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}