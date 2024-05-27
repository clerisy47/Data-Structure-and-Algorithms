// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

#include <bits/stdc++.h>

bool isArmstrong(int x)
{
    int org_x = x;
    int length_x = floor(log10(x)) + 1;
    int result = 0;
    while (x != 0)
    {
        result += pow(x % 10, length_x);
        x /= 10;
    }
    return org_x == result;
}
