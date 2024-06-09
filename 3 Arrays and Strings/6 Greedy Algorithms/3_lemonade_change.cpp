// https://leetcode.com/problems/lemonade-change/description/

#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int> &bills)
{
    int count_5 = 0, count_10 = 0;
    for (auto &x : bills)
    {
        if (x == 10)
        {
            count_10++;
            if (count_5 == 0)
                return false;
            count_5--;
        }
        else if (x == 20)
        {
            if (count_5 == 0 || (count_10 == 0 && count_5 < 3))
                return false;
            if (count_10 == 0)
            {
                count_5-=3;
            }
            else
            {
                count_5--;
                count_10--;
            }
        }
        else
        {
            count_5++;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}