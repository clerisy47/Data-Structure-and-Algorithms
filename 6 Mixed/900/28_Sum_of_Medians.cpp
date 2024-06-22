// https://codeforces.com/problemset/problem/1440/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> a = inputVector(n1 * n2);
        int med = n1 - ceil(1.0 * n1 / 2); // counting from last
        int ans = 0, ctr = 0;
        for (int i = n1 * n2 - 1 - med; i >= 0; i -= med + 1)
        {
            ans += a[i];
            ctr++;
            if (ctr >= n2)
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}