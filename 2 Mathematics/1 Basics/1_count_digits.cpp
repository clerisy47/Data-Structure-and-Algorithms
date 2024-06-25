// https://www.geeksforgeeks.org/problems/ctr-digits5716/1

#include <bits/stdc++.h>
using namespace std;

// Brute Force
int countDigits(int n)
{
    int ctr = 0;
    for (int i = n; i != 0; i /= 10)
    {
        ctr++;
    }
    return ctr;
}
// TC: O(log10(n))
// SC: O(1)

// Optimal assuming n is natural number
int countDigits(int n)
{
    return log10(n) + 1;
}

// TC: O(1)
// SC: O(1)

int main()
{

    return 0;
}

// floor(log10(x)) + 1  for best time and space complexity