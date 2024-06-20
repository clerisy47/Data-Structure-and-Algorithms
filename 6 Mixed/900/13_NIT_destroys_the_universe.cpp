// https://codeforces.com/problemset/problem/1696/B

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
        if (accumulate(a.begin(), a.end(), 0) == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int i, j;
        for (i = 0; i <= n - 1 && a[i] == 0; i++)
        {
        }
        for (j = n - 1; j >= i && a[j] == 0; j--)
        {
        }
        int ctr = 1;
        for (; i <= j; i++)
        {
            if (a[i] == 0)
            {
                ctr = 2;
                break;
            }
        }

        cout << ctr << endl;
    }
    return 0;
}