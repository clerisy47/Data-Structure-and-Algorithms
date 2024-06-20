// https://codeforces.com/problemset/problem/1794/B

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

void printVector(vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
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

        // since 1 divides all number
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i] == 1)
            {
                a[i]++;
            }
        }

        for (int i = 1; i <= n - 1; i++)
        {

            if (a[i] % a[i - 1] == 0)
            {
                a[i]++;
            }
        }

        printVector(a);
    }
    return 0;
}