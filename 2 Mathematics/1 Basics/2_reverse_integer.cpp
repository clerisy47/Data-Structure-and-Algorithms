#include <bits/stdc++.h>

int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

// Time Complexity O(n) 
// Space Complexity O(1)
