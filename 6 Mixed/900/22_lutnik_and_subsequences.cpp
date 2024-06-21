// https://codeforces.com/problemset/problem/1582/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a = inputVector(n);
        int ctr_1 = 0, ctr_0 = 0;
        for (auto &i : a)
        {
            if (i == 1)
            {
                ctr_1++;
            }
            else if (i == 0)
            {
                ctr_0++;
            }
        }
        // even though ctr_0 is ll in bitwise operations the left side operand must be ll as well
        cout << ((1ll << ctr_0) * ctr_1) << endl; // we can remove multiple 0s but we can only remove one ones
    }
    return 0;
}