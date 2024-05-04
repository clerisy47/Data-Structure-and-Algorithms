// https://leetcode.com/problems/super-pow/description/

// euler's totient function Φ(n) of a number n is the number of coprimes from 1 to n
// Φ(n)=  n* ∏(1-1/p) where p is prime factor of n
// a^b %m can be written as a^(b%Φ(n)) %m for prime m
// for 1337, its prime factors are 7 and 191 so Φ(n) = 1140

#include <bits/stdc++.h>
using namespace std;

int mod_add(int x, int y, int m)
{
    return (x % m + 0LL + y % m) % m;
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

int superPow(int a, vector<int> &b)
{
    int b_int = 0;
    int n = b.size();
    for (int i = 0; i <= n - 1; i++)
    {
        b_int = mod_multiply(b_int, 10, 1140);
        b_int = mod_add(b_int, b[i], 1140);
    }
    return mod_power(a, b_int, 1337);
}

vector<int> inputVector(int n)
{
    vector<int> arr(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, n;
    cin >> a;
    cin >> n;
    vector<int> b = inputVector(n);
    cout << superPow(a, b);
    return 0;
}