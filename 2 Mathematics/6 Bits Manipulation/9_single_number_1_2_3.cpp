// https://leetcode.com/problems/single-number/description/
// https://leetcode.com/problems/single-number-ii/description/
// https://leetcode.com/problems/single-number-iii/description/

#include <bits/stdc++.h>
using namespace std;

// Brute Force, Hashing method and pointer method in array folder

// Single Number 1
int singleNumber1(vector<int> &arr)
{
    int xor_ones = 0, n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        xor_ones ^= arr[i];
    }
    return xor_ones;
}

// Single Number 2

int singleNumber2(vector<int> &arr)
{
    int ones = 0, twos = 0, n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        ones = (ones ^ arr[i]) & ~twos; // ones will go to ones if it isn't in twos.(making it zero if element is occuring thrice) xor is used at if it goes there twice it will return 0
        twos = (twos ^ arr[i]) & ~ones; // twos shouldn't be in ones
    }
    return ones;
}

// Single Number 3

vector<int> singleNumber3(vector<int> &arr)
{
    int xor_ones = 0, n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        xor_ones ^= arr[i];
    }
    int rightmost_set_bit = xor_ones & (xor_ones - 1) ^ xor_ones;
    int bucket_1 = 0, bucket_2 = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] & rightmost_set_bit)
            bucket_1 ^= arr[i]; // checks if the rightmost_set_bit's set position is set in the arr[i] as well
        else
            bucket_2 ^= arr[i]; // two unique number will always end up in different bucket as xor_ones is their xor and its rightmost_set_bit's set position is set will be set in one of them only
    }
    return {bucket_1, bucket_2};
}

int main()
{

    return 0;
}