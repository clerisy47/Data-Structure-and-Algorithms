#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define debug(...) 47
#else
#include "debug.h"
#endif
#define int long long
#define float long double
#define endl '\n'
#define inf LLONG_MAX >> 2
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define gcd(num1, num2) (__gcd(num1, num2))
#define lcm(num1, num2) ((num1) * (num2) / __gcd((num1), (num2)))
#define popct(num) (__builtin_popcountll(num))
int mod = 1000000007ll;

template <typename T>
istream &operator>>(istream &in, vector<T> &vec)
{
    for (auto &elem : vec)
        in >> elem;
    return in;
}

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    cin >> a;
    sort(a.begin(), a.end());
    int lans = 0; // number of pairs less than or equal to l-1
    int rans = 0; // number of pairs less than or equal to r
    for (int i = 0, j = n - 1; i < j;)
    {
        if (a[i] + a[j] <= l - 1)
        {
            lans += j - i;
            i++;
        }
        else
        {
            j--;
        }
    }
    for (int i = 0, j = n - 1; i < j;)
    {
        if (a[i] + a[j] <= r)
        {
            rans += j - i;
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << rans - lans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    while (tc--)
    {
        solve();
    }
    return 0;
}