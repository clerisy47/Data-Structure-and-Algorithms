// https://codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;

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
        unordered_map<int, int> ctr;
        bool yes = false;
        for (int i = 0; i <= n - 1; i++)
        {
            int x;
            cin >> x;
            ctr[x]++;
        }
        if (ctr.size() == 1)
        {
            yes = true;
        }
        else if (ctr.size() == 2)
        {
            for (auto &it : ctr)
            {
                if (it.second == n / 2)
                {
                    yes = true;
                }
            }
        }
        if (yes)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}