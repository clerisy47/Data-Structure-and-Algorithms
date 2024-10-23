// https://codeforces.com/problemset/problem/1471/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1

vector<int> inputVector(int n)
{
    vector<int> arr;
    int x;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    return arr;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a = inputVector(n);
        int minAns = ceil(1.0 * accumulate(a.begin(), a.end(), 0LL) / x);
        int maxAns = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            maxAns += ceil(1.0 * a[i] / x);
        }
        cout << minAns << " " << maxAns << endl;
    }
    return 0;
}