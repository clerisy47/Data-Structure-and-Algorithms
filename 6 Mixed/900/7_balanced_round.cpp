// https://codeforces.com/problemset/problem/1850/D

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
        int n, k;
        cin >> n >> k;
        vector<int> a = inputVector(n);
        sort(a.begin(), a.end());
        int ctr = 1, maxCtr = 1; // ctr is initalized as 1 since element itself is balanced
        for (int i = 1; i <= n - 1; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                ctr++;
                maxCtr = max(maxCtr, ctr);
            }
            else
            {
                ctr = 1;
            }
        }
        cout << n - maxCtr << endl;
    }
    return 0;
}