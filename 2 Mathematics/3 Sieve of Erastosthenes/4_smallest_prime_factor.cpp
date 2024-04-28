// 2<= n <= 100000

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve_of_erastosthenes(int n)
{ // modified sieve_of_erastosthenes
    vector<int> primes(n + 1);
    for (int i = 2; i <= n; i++)
    {
        primes[i] = i;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = i;
            }
        }
    }
    return primes;
    // Time Complexity: O(n * log log n +n)
    // Space Complexity: O(n)
}

int main()
{
    int q, n;
    cin >> q;
    vector<int> primes = sieve_of_erastosthenes(100000);
    for (int i = 0; i <= q - 1; i++)
    {
        cin >> n;
        cout << primes[n] << endl;
    }
    return 0;
}
