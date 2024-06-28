// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

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
    {
        int n;
        cin >> n;
        vector<int> a = inputVector(n);
        int ctr = 1, maxCtr = 1;
        for (int i = 1; i <= n - 1; i++)
        {
            if (a[i] > a[i - 1])
            {
                ctr++;
                maxCtr = max(maxCtr, ctr);
            }
            else
            {
                ctr = 1;
            }
        }
        cout << maxCtr << endl;
    }
    return 0;
}