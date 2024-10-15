// https://codeforces.com/problemset/problem/1876/A

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
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> a1 = inputVector(n1);
        vector<int> a2 = inputVector(n1);
        multimap<int, int> m1;
        for (int i = 0; i <= n1 - 1; i++)
        {
            if (a2[i] < n2)
            {
                m1.insert({a2[i], a1[i]});
            }
        }
        int c1 = n2, c2 = 1;
        for (auto &x : m1)
        {
            c1 += x.first * x.second;
            c2 += x.second;
            if (c2 >= n1)
            {
                c1 -= (c2 - n1) * x.first;
                break;
            }
        }
        if (c2 < n1)
        {
            c1 += (n1 - c2) * n2;
        }
        cout << c1 << endl;
    }
    return 0;
}