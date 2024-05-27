// sieve of eratosthenes method in sieve folder

#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    int sum = 0;
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
// Time Complexity: O(n)

// For twin prime check if their difference is 2 and both are prime numbers.

