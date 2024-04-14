// 0 <= n <= 10000

#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve_of_erastosthenes(int n)
{
    vector<bool> primes(n + 1, 1);
    primes[0] = 0;
    primes[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = 0;
            }
        }
    }
    return primes;
    // Time Complexity: O(n * log log n)
    // Space Complexity: O(n)
}

void print_prime(int n, vector<bool> &primes)
{
    for (int j = 0; j <= n; j++)
    {
        if (primes[j])
        {
            cout << j << " ";
        }
    }
    // Time Complexity: O(n) + O(n * log log n)
    // Space Complexity: O(n)
}

int main()
{
    int q, n;
    cin >> q;
    vector primes = sieve_of_erastosthenes(100000);
    for (int i = 0; i <= q - 1; i++)
    {
        cin >> n;
        print_prime(n, primes);
        cout << endl;
    }
    return 0;
}
