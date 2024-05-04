#include <bits/stdc++.h>
using namespace std;

// 110111 : 110110
int clearLastSetBit(int num)
{
    return num & (num - 1);
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
    cout << clearLastSetBit(55) << endl;
    cout << clearAllBitsLeft(55, 2) << endl;
    cout << clearAllBitsRight(55, 2) << endl;

    return 0;
}