// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;

// bool isPallindrome(string s)
// {
//     for (int i = 0, j = 0; i <= j; i++, j++)
//     {
//         if (s[i] != s[j])
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        unordered_map<char, int> m;
        int ctr = 0;
        cin >> n >> k;

        for (int i = 0; i <= n - 1; i++)
        {
            char x;
            cin >> x;
            m[x]++;
        }

        for (auto &i : m)
        {
            if (i.second % 2 != 0)
            {
                ctr++;
            }
        }

        // If string itself is pallindrome no matter what k it is, it can always form a pallindrome
        if (k >= ctr - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}