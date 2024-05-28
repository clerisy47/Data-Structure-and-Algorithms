#include <bits/stdc++.h>
using namespace std;

int N = 1000;
vector<bool> sieve(N, true);

void fillSieve()
{
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= N - 1; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= N - 1; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

int kth_prime(int k)
{
    int ctr = 0;
    for (int i = 2; i <= N - 1; i++)
    {
        if (sieve[i])
        {
            ctr++;
            if (ctr == k)
                return i;
        }
    }
}

int main()
{
    fillSieve();
    int k;
    cin >> k;
    int kthPrime = kth_prime(k);
    cout << kthPrime << endl;
    return 0;
}