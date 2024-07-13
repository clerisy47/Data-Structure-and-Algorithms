#include <bits/stdc++.h>
using namespace std;

string encodeBase62(unsigned long long n)
{
    if (n == 0)
    {
        return "0";
    }

    string base62_chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string base62;

    for (unsigned long long i = n; i != 0; i /= 62)
    {
        base62 = base62_chars[i % 62] + base62;
    }

    return base62;
}

int binary_decimal(unsigned long long n)
{
    int r = 0;
    for (int i = 0; n != 0; i++)
    {
        int rem = n % 10;
        r += rem * pow(2, i);
        n /= 10;
    }
    return r;
}
unsigned long long decimal_binary(int n)
{
    unsigned long long r = 0;
    for (int i = 0; n != 0; i++)
    {
        int rem = n % 2;
        r += rem * pow(10, i);
        n /= 2;
    }
    return r;
}

// in vector form
vector<int> decimal_binary_v(int n)
{
    if (n == 0)
    {
        return {0};
    }
    vector<int> r;
    for (; n != 0; n /= 2)
    {
        int rem = n % 2;
        r.push_back(rem);
    }
    reverse(r.begin(), r.end());
    return r;
}

int main()
{
    return 0;
}