#include <bits/stdc++.h>
class Solution
{
public:
    int gcd(int x, int y)
    {
        while (y != 0)
        {
            int temp = y;
            y = x % y;
            x = temp;
        }
        return x;
    }

    int lcm(int x, int y)
    {
        if (x == 0 || y == 0)
            return 0; // LCM is not defined for 0
        return x * y / gcd(x, y);
    }
};

// Time complexity O(min(x,y))