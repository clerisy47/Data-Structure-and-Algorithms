// https://leetcode.com/problems/maximal-rectangle/description/

#include <bits/stdc++.h>
using namespace std;

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

int maximalRectangle(vector<vector<int>> &matrix)
{
    int maxArea = 0;
    int n = matrix.size(), m = matrix[0].size();
    vector<int> height(m, 0);
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (matrix[i][j] == 1)
                height[j]++;
            else
                height[j] = 0;
        }
        int area = largestRectangleArea(height);
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}