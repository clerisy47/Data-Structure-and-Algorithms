#include <bits/stdc++.h>
using namespace std;

int digits_sum(int n)
{
    if (n <= 0)
        return 0;
    return n % 10 + digits_sum(n / 10);
}

// TC: log10n
// SC: log10n

int main()
{
    int n = 7654321;
    cout << digits_sum(n);
    return 0;
}