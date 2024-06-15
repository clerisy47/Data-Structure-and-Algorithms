// https://codeforces.com/problemset/problem/1777/A

#include <bits/stdc++.h>
using namespace std;

vector<int> inputVector(int n)
{
    vector<int> a;
    int x;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a = inputVector(n);
        int ctr = 0;
        for (int i = 0; i <= n - 2; i++)
        {
            if ((a[i] + a[i + 1]) % 2 == 0) // same parity
            {
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }
    return 0;
}