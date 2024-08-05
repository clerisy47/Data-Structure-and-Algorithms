// https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    stack<char> st;

    for (char c : str)
    {
        if (c == '[' || c == '(' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return false;
            if (c == ']' && st.top() == '[')
                st.pop();
            else if (c == ')' && st.top() == '(')
                st.pop();
            else if (c == '}' && st.top() == '{')
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}

int main()
{

    return 0;
}