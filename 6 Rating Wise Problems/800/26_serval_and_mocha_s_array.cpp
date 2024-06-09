// https://codeforces.com/problemset/problem/1789/A

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
        bool f = false;
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (__gcd(a[i], a[j]) <= 2)
                {
                    f = true;
                    break;
                }
            }
        }
        if (f)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}