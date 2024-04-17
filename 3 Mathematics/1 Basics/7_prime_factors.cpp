#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{
    if (n <= 1)
    {
        cout << "No prime factors" << endl;
        return;
    }
    int i = 2;
    int copy_n = n;
    while (i < n)
    {
        if (copy_n % i == 0)
        {
            cout << i << " ";
            copy_n /= i;
        }
        else
        {
            i++;
        }
    }
    if (copy_n > 1)
        cout << n; // it means it is a prime number itself
}
