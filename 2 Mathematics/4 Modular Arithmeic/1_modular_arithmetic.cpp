#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

int modAdd(int x, int y)
{
    return (x % mod + y % mod) % mod;
}

int modSub(int x, int y)
{
    return (x % mod - y % mod + mod) % mod;
}

int modMultiply(int x, int y)
{
    return (x % mod * y % mod) % mod;
}

// x <= 1e18 y <=1e9
int modPower(int x, int y)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = ans * x % mod;
        }
        x = x * x % mod;
        y >>= 1;
    }
    return ans;
}
// TC: log(n)

// x <= 1e18 y <=1e18
int modMultiply2(int x, int y)
{
    int ans = 0;
    while (y)
    {
        if (y & 1)
            ans = (ans + x) % mod;
        x = (x + x) % mod;
        y >>= 1ll;
    }
    return ans;
}

int modPower2(int x, int y)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = modMultiply(ans, x);
        }
        x = modMultiply(x, x);
        y >>= 1;
    }
    return ans;
}
// TC: (log(n))^2

int mod_inverse(int x)
{
    // modulus multiplicative inverse
    return modPower(x, mod - 2);
}

int mod_divide(int x, int y)
{
    return modMultiply(x, mod_inverse(y));
}

int mod_factorial(int x)
{
    int ans = 1;
    for (int i = 2; i <= x; i++)
    {
        ans = modMultiply(ans, i);
    }
    return ans;
}

signed main()
{
    cout << "Testing modAdd:" << endl;
    cout << "modAdd(1e9, 1e9)= " << modAdd(1e9, 1e9) << endl;
    cout << "modAdd(12, 5)= " << modAdd(12, 5) << endl;

    // Test modSub
    cout << "\nTesting modSub:" << endl;
    cout << "modSub(20, 10)= " << modSub(20, 10) << endl;
    cout << "modSub(100, 19)= " << modSub(100, 19) << endl;

    // Test modMultiply
    cout << "\nTesting modMultiply:" << endl;
    cout << "modMultiply(10, 20)= " << modMultiply(10, 20) << endl;
    cout << "modMultiply(10000, 100000)= " << modMultiply(100000, 100000) << endl;

    // Test modPower
    cout << "\nTesting modPower:" << endl;
    cout << "modPower(2, 10) " << modPower(2, 10) << endl;
    cout << "modPower(10, 1000000000) " << modPower(10, 1000000000) << endl;

    // Test modPower2
    cout << "\nTesting modPower2:" << endl;
    cout << "modPower(2, 10) " << modPower(2, 10) << endl;
    cout << "modPower(10, 1000000000) " << modPower(10, 1000000000000) << endl;

    // Test mod_divide
    cout << "\nTesting mod_divide:" << endl;
    cout << "mod_divide(2000, 10) " << mod_divide(2000, 10) << endl;
    cout << "mod_divide(10, 20) " << mod_divide(10, 20) << endl;

    return 0;
}