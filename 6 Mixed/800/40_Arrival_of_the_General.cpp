// https://codeforces.com/problemset/problem/144/A

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
        int maxI = 0, minI = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            if (a[i] > a[maxI])
            {
                maxI = i;
            }
            else if (a[i] <= a[minI])
            {
                minI = i;
            }
        }
        if (maxI < minI)
        {
            cout << (maxI + n - 1 - minI) << endl;
        }
        else
        {
            cout << (maxI + n - 2 - minI) << endl;
        }
    }
    return 0;
}