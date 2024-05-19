#include <bits/stdc++.h>
using namespace std;

void print_1_n(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";

    print_1_n(n - 1); // Having print top of the function makes n=1 first then n=original_n
}
