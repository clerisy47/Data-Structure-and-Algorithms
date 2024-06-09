// https://codeforces.com/problemset/problem/1831/A

#include <bits/stdc++.h>
using namespace std;

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
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int k = 2 * sum / n;
        for (auto &it : arr)
        {
            cout << k - it << ' ';
        }
        cout<<endl;
    }
    return 0;
}