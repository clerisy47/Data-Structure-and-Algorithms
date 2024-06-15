// https://codeforces.com/problemset/problem/1788/A

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
        int tot2 = 0;
        for (auto &it : a)
        {
            if (it == 2)
            {
                tot2++;
            }
        }
        int curr2 = 0, ans = -1;
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i] == 2)
            {
                curr2++;
            }
            if (curr2 + curr2 == tot2)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}