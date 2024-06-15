// https://codeforces.com/problemset/problem/1859/A

#include <bits/stdc++.h>
using namespace std;

vector<int> inputVector(int n)
{
    vector<int> arr(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
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
        vector<int> arr = inputVector(n);
        sort(arr.begin(), arr.end());
        int maxEle = arr.back();
        if (arr[0] == maxEle)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> c, d;
        for (auto &x : arr)
        {
            if (x == maxEle)
            {
                d.push_back(x);
            }
            else
            {
                c.push_back(x);
            }
        }
        cout << c.size() << " " << d.size() << endl;
        printVector(c);
        printVector(d);
    }
    return 0;
}