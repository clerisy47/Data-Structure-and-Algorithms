// https://codeforces.com/problemset/problem/1900/A

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
        int curr_ctr = 0, max_ctr = 0, total_ctr = 0, n;
        cin >> n;
        while (n--)
        {
            char x;
            cin >> x;
            if (x == '.')
            {
                curr_ctr++;
                total_ctr++;
                max_ctr = max(max_ctr, curr_ctr);
            }
            else
            {
                curr_ctr = 0;
            }
        }
        if (max_ctr >= 3)
        {
            cout << 2<<endl;
        }
        else
        {
            cout << total_ctr<<endl;
        }
    }

    return 0;
}