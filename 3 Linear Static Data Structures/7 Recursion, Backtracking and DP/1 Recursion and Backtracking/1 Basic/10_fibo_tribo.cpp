// https://leetcode.com/problems/fibonacci-number/description/
// https://leetcode.com/problems/n-th-tribonacci-number/

#include <bits/stdc++.h>
using namespace std;

// Basic Recursion
int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Time Complexity O(2^n)
// Space Complexity O(n)

// O(n) in dynamic programming folder
// O(logn) in mathematics folder

int tribonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main()
{
    return 0;
}
