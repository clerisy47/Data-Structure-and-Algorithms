// https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        // if (n % 2 == 0 || (n % 2 == 1 && k % 2 == 1)) // applying boolean algebra we can find the n%2==1 statement is redundant
        if (n % 2 == 0 || k % 2 == 1) // if n is even we can make y = 0 and form our number, if n is odd, we need k to be odd
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}