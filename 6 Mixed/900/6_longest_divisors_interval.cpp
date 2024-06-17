// https://codeforces.com/problemset/problem/1855/B

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
        long long n;
        cin >> n;
        int i;
        for (i = 1; n % i == 0; i++)
        {
        }
        cout << i - 1 << endl;
    }
    return 0;
}