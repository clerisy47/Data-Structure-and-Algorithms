// https://codeforces.com/problemset/problem/1881/A

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
        int n1, n2;
        string s1, s2;
        cin >> n1 >> n2 >> s1 >> s2;
        int ans = -1;
        for (int i = 0; i <= 5; i++) // at  n1.n2<=25, at worst case n1=1, n2=25 even then we can just iterate 5 times as 2^5=32
        {
            if (s1.find(s2) != string ::npos)
            {
                ans = i;
                break;
            }
            else
            {
                s1 += s1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}