#include <bits/stdc++.h>
using namespace std;

// '(' and ')'
bool checkValidString(string s)
{
    int ctr = 0;
    for (auto x : s)
    {
        if (x == '(')
            ctr++;
        else
            ctr--;
        if (ctr < 0)
            return false;
    }
    return ctr == 0;
}

// '(', '*' and ')' '*' can be any '(' or ')'
bool checkValidString(string s)
{
    int ctrMax = 0, ctrMin = 0;
    for (auto x : s)
    {
        if (x == '(')
        {
            ctrMax++;
            ctrMin++;
        }
        else if (x == ')')
        {
            ctrMax--;
            ctrMin--;
        }
        else
        {
            ctrMax++;
            ctrMin--;
        }
        if (ctrMax < 0)
            return false;
        ctrMin = max(0, ctrMin); // if ctrMin can't be negative as it will be invalid if it is. So, we don't decrease it lesser than 0
    }
    return ctrMin == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}