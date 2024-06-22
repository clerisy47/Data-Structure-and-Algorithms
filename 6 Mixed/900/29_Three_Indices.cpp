// https://codeforces.com/problemset/problem/1380/A

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a = inputVector(n);
        int i, j, k;
        for (i = 0, j = 1, k = 2; k <= a.size() - 1; i++, j++, k++)
        {
            if (a[j] > a[i] && a[j] > a[k])
            {
                break;
            }
        }
        if (k == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
        }
    }

    return 0;
}