// 0 <= n <= 10000

#include <bits/stdc++.h>
using namespace std;

int N = 100;
vector<bool> isPrime(N, true);

void fillSieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N - 1; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= N - 1; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
// Time Complexity: O(n * log log n)
// Space Complexity: O(n)

void print_prime(int n)
{
    for (int j = 2; j <= n; j++)
    {
        if (isPrime[j])
        {
            cout << j << " ";
        }
    }
    // Time Complexity: O(n) + O(n * log log n)
    // Space Complexity: O(n)
}

int main()
{
    fillSieve();
    int n;
    cin >> n;
    print_prime(n);
    return 0;
}
