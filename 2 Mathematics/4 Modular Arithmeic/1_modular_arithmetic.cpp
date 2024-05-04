#include <bits/stdc++.h>
using namespace std;

#define ll long long

int mod_add(int x, int y, int m)
{
    return (x % m + 0LL + y % m) % m;
}

int mod_sub(int x, int y, int m)
{
    return (x % m - y % m + m) % m;
}

int mod_multiply(int x, int y, int m)
{
    return (x % m * 1LL * y % m) % m;
}

// x <= 1e18 y <=1e9 m == 1e9+7
int mod_power(int x, int y, int m)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
            ans = mod_multiply(ans, x, m);
        x = mod_multiply(x, x, m);
        y >>= 1;
    }
    return ans;
}
// TC: log(n)

// x <= 1e18 y <=1e18 z == 1e9 + 7
int mod_multiply_binary(ll x, ll y, ll m)
{
    ll ans = 0;
    while (y)
    {
        if (y & 1)
            ans = mod_add(ans, x, m);
        x = mod_add(x, x, m);
        y >>= 1;
    }
}
int mod_power(ll x, ll y, ll m)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = mod_multiply_binary(ans, x, m);
        }
        x = mod_multiply_binary(x, x, m);
        y >>= 1;
    }
    return ans;
}
// TC: (log(n))^2

int mod_inverse(int x, int m)
{
    // modulus multiplicative inverse
    return mod_power(x, m - 2, m);
}

int mod_divide(int x, int y, int m)
{
    return (x % m * mod_inverse(y, m)) % m;
}

int mod_factorial(int x, int m)
{
    int ans = 1;
    for (int i = 2; i <= x; i++)
    {
        ans = mod_multiply(ans, i, m);
    }
    return ans;
}

int main()
{
    int m = 1000000007;

    cout << "Testing mod_add:" << endl;
    cout << "mod_add(10, 20, " << m << ") = " << mod_add(1e9, 1e9, m) << endl;
    cout << "mod_add(12, 5, " << 5 << ") = " << mod_add(12, 5, 5) << endl;

    // Test mod_sub
    cout << "\nTesting mod_sub:" << endl;
    cout << "mod_sub(20, 10, " << m << ") = " << mod_sub(20, 10, m) << endl;
    cout << "mod_sub(100, 19, " << m << ") = " << mod_sub(100, 19, m) << endl;

    // Test mod_multiply
    cout << "\nTesting mod_multiply:" << endl;
    cout << "mod_multiply(10, 20, " << m << ") = " << mod_multiply(10, 20, m) << endl;
    cout << "mod_multiply(10000, 100000, " << m << ") = " << mod_multiply(100000, 100000, m) << endl;

    // Test mod_power
    cout << "\nTesting mod_power:" << endl;
    cout << "mod_power(2, 10, " << m << ") = " << mod_power(2, 10, m) << endl;
    cout << "mod_power(10, 1000000000, " << m << ") = " << mod_power(10, 1000000000, m) << endl;

    // Test mod_divide
    cout << "\nTesting mod_divide:" << endl;
    cout << "mod_divide(2000, 10, " << m << ") = " << mod_divide(2000, 10, m) << endl;
    cout << "mod_divide(10, 20, " << m << ") = " << mod_divide(10, 20, m) << endl;

    return 0;
}