// Prime numbers from n1 to n2 (both inclusive)
// 0<= n <= 100000

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve_of_erastosthenes(int n)
{
    vector<int> primes(n + 1, 1);
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
    for (int i = 2; i <= n; i++)
    {
        primes[i] += primes[i - 1];
    }
    return primes;
    // Time Complexity: O(n * log log n+n)
    // Space Complexity: O(n)
}

int count_prime(int l, int r, vector<int> &primes)
{
    return primes[r] - primes[l - 1];
    // Time Complexity: O(r-l) + O(n * log log n)
    // Space Complexity: O(r-l)
}

int main()
{
    int q, l, r;
    cin >> q;
    vector<int> primes = sieve_of_erastosthenes(100000);
    for (int i = 0; i <= q - 1; i++)
    {
        cin >> l;
        cin >> r;
        cout << count_prime(l, r, primes) << endl;
    }
    return 0;
}
