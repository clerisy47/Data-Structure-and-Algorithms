// https://www.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1

#include <bits/stdc++.h>
using namespace std;

int getRightmostSetBit(int num)
{
    return num & (num - 1) ^ num;
}

// 110111 : 110110
int clearLastSetBit(int num)
{
    return num & (num - 1);
}

int setLastUnsetBit(int num)
{
    return num | (num + 1);
}

// 110111 i=2 : 00111
int clearAllBitsLeft(int num, int i) // i exclusive
{
    return num & ((1 << (i + 1)) - 1);
}

// 110111 i=2 : 110000 (i: 0 based indexing from right to left)
int clearAllBitsRight(int num, int i) // i inclusive
{
    return num & (~((1 << (i + 1)) - 1));
}

int main()
{
    return 0;
}