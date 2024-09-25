#include <bits/stdc++.h>
using namespace std;

void lowestFraction(pair<int, int> &fraction)
{
    int gcd_fraction = __gcd(fraction.first, fraction.second);
    fraction.first /= gcd_fraction;
    fraction.second /= gcd_fraction;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> fraction = {16, 12};
    lowestFraction(fraction);
    cout << fraction.first << " " << fraction.second;

    return 0;
}