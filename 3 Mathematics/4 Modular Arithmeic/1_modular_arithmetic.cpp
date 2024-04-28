#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll mod_sum(ll x, ll y, ll m)
{
    return (x % m + y % m) % m;
}

ll mod_sub(ll x, ll y, ll m)
{
    return (x % m - y % m + m) % m;
}

ll mod_multiply(ll x, ll y, ll m)
{
    return (x % m * y % m) % m;
}

ll mod_power(ll x, ll y, ll m)
{
    ll ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = mod_multiply(ans, x, m);
        }
        x = mod_multiply(x, x, m);
        y >>= 1;
    }
    return ans;
}

ll mod_inverse(ll x, ll m)
{
    // modulus multiplicative inverse
    return mod_power(x, m - 2, m);
}

ll mod_divide(ll x, ll y, ll m)
{
    return (x % m * mod_inverse(y, m)) % m;
}

ll mod_factorial(ll x, ll m)
{
    ll ans = 1;
    for (ll i = 2; i <= x; i++)
    {
        ans = (ans * i) % m;
    }
    return ans;
}

int main()
{
    ll m = 1000000007;

    cout << "Testing mod_sum:" << endl;
    cout << "mod_sum(10, 20, " << m << ") = " << mod_sum(10, 20, m) << endl;
    cout << "mod_sum(12, 5, " << 5 << ") = " << mod_sum(12, 5, 5) << endl;

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