// Number equal to proper divisors (proper means that exclude itself)

#include <bits/stdc++.h>
using namespace std;

int sum_divisors(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum==n;
}

// Time Complexity: O(n)
