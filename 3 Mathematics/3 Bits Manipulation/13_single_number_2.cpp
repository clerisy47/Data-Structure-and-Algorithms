// Every number appearing thrice except one number

#include <bits/stdc++.h>
using namespace std;

// Brute Force, Hashing method and pointer method in array folder

int getSingleElement(vector<int> &arr)
{
    int ones = 0, twos=0, n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        ones = (ones^arr[i])&~twos; // ones will go to ones if it isn't in twos.(making it zero if element is occuring thrice) xor is used at if it goes there twice it will return 0
        twos = (twos^arr[i])&~ones; // twos shouldn't be in ones
    }
    return ones;
}

int main()
{

    return 0;
}