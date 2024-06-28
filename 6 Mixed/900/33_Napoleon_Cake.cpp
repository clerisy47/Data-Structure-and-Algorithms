// https://codeforces.com/problemset/problem/1501/B

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

void printVector(vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
}

int relu(int n)
{
    if (n >= 0)
    {
        return n;
    }
    return 0;
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
        vector<int> r(n);
        int prev = a[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != 0 || prev != 0)
            {
                r[i] = 1;
                prev = max(prev, a[i]);
                prev--;
            }
        }
        printVector(r);
    }
    return 0;
}