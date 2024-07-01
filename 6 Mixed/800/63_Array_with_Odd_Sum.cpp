// https://codeforces.com/problemset/problem/1296/A

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
        int sum = accumulate(a1.begin(), a1.end(), 0LL);
        if (sum & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int oc = 0, ec = 0;
            for (auto &x : a1)
            {
                if (x & 1)
                {
                    oc++;
                }
                else
                {
                    ec++;
                }
            }
            if (oc >= 1 && ec >= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}