// 0 1 1 2 3 5 8 13

#include <bits/stdc++.h>
using namespace std;

// Basic Recursion
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    
    int l =fibonacci(n-1);

    int r = fibonacci(n-1);
    return l+r;
}

// Time Complexity O(2^n)
// Space Complexity O(n)

// O(n) in dynamic programming folder
// O(logn) in mathematics folder

int main()
{
    return 0;
}
