// https://codeforces.com/problemset/problem/1675/B

#include <bits/stdc++.h>
using namespace std;
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a = inputVector(n);
        bool f = false;
        int ctr = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i + 1] == 0)
            {
                f = true;
                break;
            }
            while (a[i] >= a[i + 1])
            {
                a[i] /= 2;
                ctr++;
            }
        }
        if (f)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ctr << endl;
        }
    }
    return 0;
}