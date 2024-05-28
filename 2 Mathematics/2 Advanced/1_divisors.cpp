// https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1

#include <bits/stdc++.h>
using namespace std;

// brute force
void divisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
}

// better
void divisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if(i!=n/i){
                cout<<n/i<<endl;
            }
        }
    }
}

// optimized version in sieve folder

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    divisors(n);

    return 0;
}