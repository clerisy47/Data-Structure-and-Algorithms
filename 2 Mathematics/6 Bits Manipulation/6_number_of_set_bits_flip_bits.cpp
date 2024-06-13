// https://leetcode.com/problems/counting-bits/
// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

#include <bits/stdc++.h>
using namespace std;

int countSetBits(int num)
{
    int ctr = 0;
    while (num > 0)
    {

        ctr += num & 1;
        num = num >> 1; // num/=2;
    }
    return ctr;
}
// TC: log n where n = number input

// brian kernighan's algorithm
int countSetBits(int num)
{
    int ctr = 0;
    while (num > 0)
    {
        num = num & (num - 1);
        ctr++;
    }
    return ctr;
}
// TC: O(n) where n = number of set bits

// Optimal using STL
int countSetBits(int num)
{
    return __builtin_popcount(num);   // number of set bits in the number
    return __builtin_popcountll(num); // number of set bits in the ll number
}
// TC: O(1)

int numberOfFlipBits(int num1, int num2)
{
    int xor_nums = num1 ^ num2;
    return countSetBits(xor_nums);
}

int main()
{

    return 0;
}
