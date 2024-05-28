// https://leetcode.com/problems/reverse-integer/description/

#include <bits/stdc++.h>

int reverse(int x)
{
    int rev = 0;
    for (int i = x; i != 0; i /= 10)
    {
        rev = rev * 10 + i % 10;
    }
    return rev;
}

// Time Complexity O(n)
// Space Complexity O(1)

// if reversing an integer may overflow then return 0

int reverse(int x)
{
    int rev = 0;

    for (int i = x; i != 0; i /= 10)
    {
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0; // check 32 bit range if r is outside the range
        rev = rev * 10 + i % 10;
    }
    return rev;
}
