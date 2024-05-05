#include <bits/stdc++.h>
using namespace std;

#define ll long long
int MOD = 1e9+7;

int mod_add(int x, int y)
{
    return (x % MOD + 0LL + y % MOD) % MOD;
}

int mod_sub(int x, int y)
{
    return (x % MOD - y % MOD + MOD) % MOD;
}

int mod_multiply(int x, int y)
{
    return (x % MOD * 1LL * y % MOD) % MOD;
}

// x <= 1e18 y <=1e9 MOD == 1e9+7
int mod_power(int x, int y)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
            ans = mod_multiply(ans, x);
        x = mod_multiply(x, x);
        y >>= 1;
    }
    return ans;
}
// TC: log(n)

// x <= 1e18 y <=1e18 z == 1e9 + 7
int mod_multiply_binary(ll x, ll y)
{
    ll ans = 0;
    while (y)
    {
        if (y & 1)
            ans = mod_add(ans, x);
        x = mod_add(x, x);
        y >>= 1;
    }
}
int mod_power(ll x, ll y)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = mod_multiply_binary(ans, x);
        }
        x = mod_multiply_binary(x, x);
        y >>= 1;
    }
    return ans;
}
// TC: (log(n))^2

int mod_inverse(int x)
{
    // modulus multiplicative inverse
    return mod_power(x, MOD - 2);
}

int mod_divide(int x, int y)
{
    return mod_multiply(x, mod_inverse(y));
}

int mod_factorial(int x)
{
    int ans = 1;
    for (int i = 2; i <= x; i++)
    {
        ans = mod_multiply(ans, i);
    }
    return ans;
}

int main()
{
    cout << "Testing mod_add:" << endl;
    cout << "mod_add(1e9, 1e9)= " << mod_add(1e9, 1e9) << endl;
    cout << "mod_add(12, 5)= " << mod_add(12, 5) << endl;

    // Test mod_sub
    cout << "\nTesting mod_sub:" << endl;
    cout << "mod_sub(20, 10)= " << mod_sub(20, 10) << endl;
    cout << "mod_sub(100, 19)= " << mod_sub(100, 19) << endl;

    // Test mod_multiply
    cout << "\nTesting mod_multiply:" << endl;
    cout << "mod_multiply(10, 20)= " << mod_multiply(10, 20) << endl;
    cout << "mod_multiply(10000, 100000)= " << mod_multiply(100000, 100000) << endl;

    // Test mod_power
    cout << "\nTesting mod_power:" << endl;
    cout << "mod_power(2, 10) " << mod_power(2, 10) << endl;
    cout << "mod_power(10, 1000000000) " << mod_power(10, 1000000000) << endl;

    // Test mod_divide
    cout << "\nTesting mod_divide:" << endl;
    cout << "mod_divide(2000, 10) " << mod_divide(2000, 10) << endl;
    cout << "mod_divide(10, 20) " << mod_divide(10, 20) << endl;

    return 0;
}