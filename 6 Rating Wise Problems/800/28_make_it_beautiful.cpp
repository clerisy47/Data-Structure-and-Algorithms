// https://codeforces.com/problemset/problem/1783/A

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

bool comp(int a1, int a2)
{
    return a1 > a2;
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
        vector<int> a = inputVector(n);
        sort(a.begin(), a.end());
        if (a[0] == a[n - 1])
        {
            cout << "NO"<<endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << a[n - 1] << " ";
            for (int i = 0; i <= n - 2; i++)
            {
                cout << a[i] << " ";
            }
            cout<<endl;
        }
    }
    return 0;
}