#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
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
};

int main()
{
    Solution sol;

    // Test case 1: Prime factors of 10
    cout << "Prime factors of 10: ";
    sol.primeFactors(10);
    cout << endl;

    // Test case 2: Prime factors of 21
    cout << "Prime factors of 21: ";
    sol.primeFactors(21);
    cout << endl;

    // Test case 3: Prime factors of 97 (prime number)
    cout << "Prime factors of 97: ";
    sol.primeFactors(97);
    cout << endl;

    // Test case 4: Prime factors of 1 (Edge case)
    cout << "Prime factors of 1: ";
    sol.primeFactors(1);
    cout << endl;

    // Test case 5: Prime factors of 0 (Edge case)
    cout << "Prime factors of 0: ";
    sol.primeFactors(0);
    cout << endl;

    return 0;
}
