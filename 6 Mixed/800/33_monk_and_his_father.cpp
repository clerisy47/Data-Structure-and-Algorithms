// https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/

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
        long long n; // n<= 1e18
        cin >> n;
        cout << __builtin_popcountll(n) << endl;
    }
    return 0;
}