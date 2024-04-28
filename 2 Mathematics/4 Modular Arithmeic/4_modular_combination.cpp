#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll facto[100000];

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

ll nCr(ll n, ll r, ll m){
    if(n<r) return 0;
    return mod_divide(mod_divide(facto[n], facto[r], m), facto[n-r], m);
}

int main(){
    facto[0]=facto[1]=1;
    for(ll i=2; i<=100000-1; i++){
        facto[i]= mod_multiply(i, facto[i-1], mod);
    }

    cout<<nCr(5,6, mod);
    
    return 0;
}