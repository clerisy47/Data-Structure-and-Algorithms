// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

void printVector(vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    {
        int n;
        cin >> n;
        int x;
        vector<int> a(n);
        for (int i = 0; i <= n - 1; i++)
        {
            cin >> x;
            a[x-1] = i + 1;
        }
        printVector(a);
    }
    return 0;
}