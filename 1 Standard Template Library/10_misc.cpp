#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Min Max" << endl;
    int n1 = 2, n2 = 3, n3 = 5, n4 = 9;
    cout << min({n1, n2, n3, n4}) << endl;
    cout << max({n1, n2, n3, n4}) << endl;

    cout << "Pop Count" << endl;
    long long n5 = 7;
    cout << __builtin_popcount(n3) << endl;   // number of set bits in the number
    cout << __builtin_popcountll(n5) << endl; // number of set bits in the ll number

    cout << __gcd(n2, n4) << endl;

    cout << "Rounding off" << endl;
    float f = 1.83456;
    cout << round(f) << endl;               // rounds to nearest integer
    cout << round(f * 1000) / 1000 << endl; // rounds to 3 decimal places

    int i = 189;
    cout << round(189 / 10.0) * 10 << endl;   // rounds to nearest 10
    cout << round(189 / 100.0) * 100 << endl; // rounds to nearest 100
}