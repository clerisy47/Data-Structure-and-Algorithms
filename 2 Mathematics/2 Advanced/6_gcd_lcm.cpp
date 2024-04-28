#include <bits/stdc++.h>
using namespace std;


// Eucledian Algorithm

// recursion
int gcd(int x, int y){
    if(y==0){
        return x;
    }
    return gcd(y, x%y);
}
// TC: O(logmin(x,y))
// SC: O(logmin(x,y))

// loop
int gcd(int x, int y)
{
    while (y )
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

// TC: O(logmin(x,y))