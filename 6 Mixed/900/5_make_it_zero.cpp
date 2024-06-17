// https://codeforces.com/problemset/problem/1869/A

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

void printVector(vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
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
        ;
        int x;
        for (int i = 0; i <= n - 1; i++)
        {
            cin >> x;
        }
        if (n % 2 == 1)
        {
            cout << 4 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
    }
    return 0;
}