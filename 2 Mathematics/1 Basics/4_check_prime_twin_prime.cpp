// sieve of eratosthenes method in sieve folder

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
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
// Time Complexity: O(sqrt(n))

// better solution utilizing the fact that except 2 all primes are odd
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n & 1 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// For twin prime check if their difference is 2 and both are prime numbers.
