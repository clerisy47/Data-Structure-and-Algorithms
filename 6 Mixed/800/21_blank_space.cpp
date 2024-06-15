// https://codeforces.com/problemset/problem/1829/B

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
        vector<int> a = inputVector(n);
        int maxLen = 0, len = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i] == 0)
            {
                len++;
                maxLen = max(maxLen, len);
            }
            else
            {
                len = 0;
            }
        }
        cout << maxLen << endl;
    }
    return 0;
}