#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    return n * (n + 1) / 2;
}

// Sum 1,2,3,...,n : n*(n+1)/2
// Sum 1,4,9,16....,n (n * (n + 1) * (2 * n + 1))/6
// Sum 1, 8, 27,....... Sum 1,2,3,...n * Sum 1,2,3,...n