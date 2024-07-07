// https://codeforces.com/problemset/problem/1883/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1

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
        vector<int> a1 = inputVector(n1);
        int minE = INFINITY;
        if (n2 == 4)
        {
            minE = 2;
            for (int i = 0; i <= n1 - 1; i++)
            {
                if (a1[i] % 4 == 0)
                {
                    minE = 0;
                    break;
                }
                if (a1[i] % 2 == 0)
                {
                    minE--;
                    if (minE == 0)
                    {
                        break;
                    }
                }
            }
        }
        for (int i = 0; i <= n1 - 1; i++)
        {
            int t = n2 - a1[i] % n2;
            if (t == n2)
            {
                t = 0;
            }
            minE = min(minE, t);
        }

        cout << minE << endl;
    }
    return 0;
}