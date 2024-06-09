// https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    deque<char> st;

    for (char c : str)
    {
        if (c == '[' || c == '(' || c == '{')
        {
            st.push_back(c);
        }
        else
        {
            if (st.empty())
                return false;
            if (c == ']' && st.back() == '[')
                st.pop_back();
            else if (c == ')' && st.back() == '(')
                st.pop_back();
            else if (c == '}' && st.back() == '{')
                st.pop_back();
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