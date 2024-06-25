// https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        for (int i = n, j = 1; i != 0; i /= 10, j *= 10)
        {
            if (i % 10 != 0)
            {
                ans.push_back(i % 10 * j);
            }
        }
        cout << ans.size() << endl;
        printVector(ans);
    }
    return 0;
}