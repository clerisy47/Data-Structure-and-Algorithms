#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Min Max" << endl;
    int n1 = 2, n2 = 3, n3 = 5, n4 = 9;
    cout << min({n1, n2, n3, n4}) << endl;
    cout << max({n1, n2, n3, n4}) << endl;

    // round, floor ceil returns double so make sure to typecast into integer if needed
    cout << "Rounding off" << endl;
    float f = 1.83456;
    cout << (int)round(f) << endl;          // returns 2 as it rounds to nearest integer
    cout << round(f * 1000) / 1000 << endl; // returns 1.835 as it rounds to 3 decimal places

    int i = 189;
    cout << round(1.0 * i / 10) * 10 << endl; // returns 190 rounds to nearest 10
    cout << round(i / 100) * 100 << endl;     // returns 200 rounds to nearest 100

    // divides by default floors a positive number and ceils a negative number that's why it's not recommend to rely on it
    cout << floor(1.0 * 10 / 3) << endl; // returns 3
    cout << ceil(1.0 * 10 / 3) << endl;  // returns 4

    cout << "Pop Count" << endl;
    long long n5 = 7;
    cout << __builtin_popcount(n3) << endl;   // number of set bits in the number
    cout << __builtin_popcountll(n5) << endl; // number of set bits in the ll number

    cout << __gcd(n2, n4) << endl;

    pair<int, int> r = {1, 2};
    cout << setfill('0') << setw(2) << r.first << ":" << setfill('0') << setw(2) << r.second << endl; // printing in formatted way

    long double d = 2.6666666666667;
    cout << setprecision(14) << d << endl; // printing with different precision
}