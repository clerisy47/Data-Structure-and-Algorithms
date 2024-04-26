#include <bits/stdc++.h>
using namespace std;

void generate(int open, int close, string &str,vector<string> &arr)
{
    if (open == 0 && close == 0)
    {
        arr.push_back(str);
        return;
    }
    if (open > 0)
    {
        str.push_back('(');
        generate(open - 1, close, str, arr);
        str.pop_back(); // backtracking
    }
    if (open < close) // not the other way around as open and close are number of brackets left and not number of brackets in the string
    {
        str.push_back(')');
        generate(open, close-1, str, arr);
        str.pop_back(); // backtracking
    }
}

vector<string> validParenthesis(int n)
{
    vector<string> arr;
    string str;
    generate(n, n, str, arr);
    return arr;
}

int main()
{

    return 0;
}