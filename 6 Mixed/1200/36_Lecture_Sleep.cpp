// https://codeforces.com/problemset/problem/961/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
    for (auto &elem : vec)
    {
        is >> elem;
    }
    return is;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    cin >> a >> b;
    int r = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (b[i])
        {
            r += a[i];
            a[i] = 0;
        }
    }
    int currSum = 0, maxSum = 0;
    for (int i = 0; i <= k - 1; i++)
    {
        currSum += a[i];
    }
    maxSum = max(currSum, maxSum);
    for (int i = 1, j = k; j <= n - 1; i++, j++)
    {
        currSum -= a[i - 1];
        currSum += a[j];
        maxSum = max(currSum, maxSum);
    }
    cout << r + maxSum << endl;

    return 0;
}