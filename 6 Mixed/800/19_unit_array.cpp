// https://codeforces.com/problemset/problem/1834/As

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
        int ctr_1 = 0, ctr_n1 = 0, ans = 0;
        for (auto &x : arr)
        {
            if (x == 1)
            {
                ctr_1++;
            }
            else
            {
                ctr_n1++;
            }
        }
        if (ctr_1 < ctr_n1)
        {
            ans += ceil((ctr_n1 - ctr_1) / 2.0);
        }
        if ((ctr_n1 - ans) % 2 != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}