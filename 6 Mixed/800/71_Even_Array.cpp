// https://codeforces.com/problemset/problem/1367/B

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
        int n1;
        cin >> n1;
        vector<int> a1 = inputVector(n1);
        int ec = 0, oc = 0, wc = 0;
        for (int i = 0; i <= n1 - 1; i++)
        {
            if (a1[i] & 1)
            {
                oc++;
            }
            else
            {
                ec++;
            }
            if ((a1[i] & 1) ^ (i & 1))
            {
                wc++;
            }
        }
        if (ec - oc == 1 || ec == oc)
        {
            cout << wc / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}