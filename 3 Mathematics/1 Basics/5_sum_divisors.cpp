#include <bits/stdc++.h>
using namespace std;

int sum_divisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum;
}

// Time Complexity: O(n)
