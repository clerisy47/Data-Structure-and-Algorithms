// https://www.geeksforgeeks.org/problems/odd-or-even3618/1
// https://leetcode.com/problems/power-of-two/description/

#include <bits/stdc++.h>
using namespace std;

bool checkEven(int num)
{
    return (num & 1) == 0; //  num % 2 == 0
    // Here as precedence of comparator operator is higher than bitwise operators. Hence brackets must be used
}

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main()
{

    return 0;
}