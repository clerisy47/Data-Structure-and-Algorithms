// euler's totient function Φ(n) of a number n is the number of coprimes from 1 to n
// Φ(n)=  n* ∏(1-1/p) where p is prime factor of n
// a^b %m can be written as a^(b%Φ(n)) %m for prime m
// for a prime number like 1e9+7 Φ(n)=n-1 

#include<bits/stdc++.h>
using namespace std;


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

int pow_of_pow(int x, int y, int z, int m){
    return mod_power(x, mod_power(y, z, m-1), m);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}