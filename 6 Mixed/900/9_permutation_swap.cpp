// https://codeforces.com/problemset/problem/1828/B

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
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a = inputVector(n);
        int ans = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            int x = abs(a[i] - (i + 1));
            ans = __gcd(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}