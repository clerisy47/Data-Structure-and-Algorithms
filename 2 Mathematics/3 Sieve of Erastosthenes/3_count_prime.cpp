// https://leetcode.com/problems/count-primes/

// Prime numbers from n1 to n2 (both inclusive)
// 0<= n <= 100000

#include <bits/stdc++.h>
using namespace std;

int N = 1000;
vector<int> count_primes(N, 1);

void fillSieve()
{
    count_primes[0] = count_primes[1] = 0;
    for (int i = 2; i * i <= N - 1; i++)
    {
        if (count_primes[i])
        {
            for (int j = i * i; j <= N - 1; j += i)
            {
                count_primes[j] = 0;
            }
        }
    }

    // modified count_primes
    for (int i = 2; i <= N - 1; i++)
    {
        count_primes[i] += count_primes[i - 1];
    }
}

int countPrimes(int l, int r)
{
    return count_primes[r] - count_primes[l - 1];
    // Time Complexity: O(r-l) + O(n * log log n)
    // Space Complexity: O(r-l)
}

int main()
{
    fillSieve();
    int l, r;
    cin >> l;
    cin >> r;
    cout << countPrimes(l, r) << endl;
    return 0;
}
