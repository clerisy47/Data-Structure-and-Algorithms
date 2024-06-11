// A monk can earn any amount of dollars a day, when he sleeps and wakes up, his money doubles magically every night.
// Find the minimum amount do he need to earn by himself to get n dollars (input)

// For the minimum amount let's assume on a day he either earns 1 dollars or doesn't earn.
// So, the required n dollar need to be expressed in the form of product of powers of 2 and 0/1
// So, the brute force solution will be to change n into binary and add the digits.
// This can be optimized by just counting the set bits in the number. 

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
        cout << __builtin_popcountll(n)<<endl;
    }
    return 0;
}