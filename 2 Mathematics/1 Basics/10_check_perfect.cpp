// https://leetcode.com/problems/perfect-number/description/
// Number equal to proper divisors (proper means that exclude itself)

#include <bits/stdc++.h>
using namespace std;

int isPerfect(int n)
{
    int sum = 1;
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum == n;
}

// Time Complexity: O(n)
