// https://www.geeksforgeeks.org/problems/swap-two-numbers3844/1

#include <bits/stdc++.h>
using namespace std;

// swap a and b
void swap1(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

// if x is 4 make it 7 and if it is 7 make is 4
void swap2(int &x)
{
    x = x ^ 4 ^ 7;
}

int main()
{

    return 0;
}