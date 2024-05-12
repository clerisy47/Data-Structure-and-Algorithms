// returns first index of the sub string

#include <bits/stdc++.h>
using namespace std;

// sliding window algorithm
bool comp(string &s, string &sub, int i, int j)
{
    for (int k = i; k <= j; k++)
    {
        if (s[k] != sub[k-i])
        {
            return false;
        }
    }
    return true;
}

int search(string &s, string &sub)
{
    int n = s.size();
    int n_sub = sub.size();
    for (int i = 0, j = n_sub - 1; j <= n - 1; i++, j++)
    {
        if(comp(s, sub, i, j))return i;
    }
    return -1;
}

int main()
{
    string s = "lolpooplol", sub="poop";
    cout<<search(s, sub);
    return 0;
}