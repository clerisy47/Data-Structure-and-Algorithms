// Find modular gcd of (a^n+ b^n, a-b) a>=b

#define mod 1000000007
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

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

ll mod_gcd(ll x, ll y, ll n)
{
    if (x == y)
        return (mod_power(x, n, mod) + mod_power(x, n, mod)) % mod;

    ll max_ans = 1, diff = x - y;
    // finding the max prime factor of diff ( second term of gcd) that divides x^n+y^n (no need to check for (x^n+y^n)%m, they're same)
    for (ll i = 1; i * i <= diff; i++) 
    {
        if (diff % i == 0)
        {
            if ((i > max_ans && mod_power(x, n, i) + mod_power(y, n, i)) % i == 0)
                max_ans = i;
            if ((diff / i > max_ans && mod_power(x, n, diff / i) + mod_power(y, n, diff / i)) % (diff / i) == 0)
                max_ans = n / i;
        }
    }
    return max_ans%mod;
}

int main()
{
    cout<<mod_gcd(10, 1, 1);
    return 0;
}