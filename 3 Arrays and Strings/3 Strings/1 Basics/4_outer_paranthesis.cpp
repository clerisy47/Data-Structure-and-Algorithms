#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
    int ctr = 0;
    string ans;
    for (auto &it : s)
    {
        if (it == '(')
        {
            ctr++;
            if (ctr >= 2)
                ans.push_back(it);
        }
        else
        {
            ctr--;
            if (ctr >= 1)
                ans.push_back(it);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}