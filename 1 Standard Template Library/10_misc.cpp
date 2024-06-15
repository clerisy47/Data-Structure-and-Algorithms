#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1 = 2, n2 = 3, n3 = 5, n4 = 9;
    cout << min({n1, n2, n3, n4}) << endl;
    cout << max({n1, n2, n3, n4}) << endl;

    long long n5 = 7;
    cout << __builtin_popcount(n3) << endl;   // number of set bits in the number
    cout << __builtin_popcountll(n5) << endl; // number of set bits in the ll number

    cout << __gcd(n2, n4);
}