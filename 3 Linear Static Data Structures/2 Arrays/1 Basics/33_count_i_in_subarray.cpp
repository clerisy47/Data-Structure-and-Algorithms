// count number of times element in index i appear in element x

#include <bits/stdc++.h>
using namespace std;

int countOccurrent(vector<int> &a, int i)
{
    int n = a.size();
    return (i + 1) * (n - i); // ie number of valid starting points * number of valid ending points of sub array
    // return (i + 1) * (n - i) -1; // if question doesn't include subarray of itself
}