#include <bits/stdc++.h>
using namespace std;

// Optimal (for some cases)
int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        // if(num%2==1){
        //     count++;
        // }
        count += num & 1;
        // num/=2;
        num = num >> 1;
    }
    return count;
}
// TC: log n where n = number input

// Optimal (for most cases)
int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}
// TC: O(n) where n = number of sets

// stl
int countSetBits(int num)
{
    return __builtin_popcount(num);   // number of set bits in the number
    return __builtin_popcountll(num); // number of set bits in the ll number
}

int main()
{

    return 0;
}