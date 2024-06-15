// https://codeforces.com/problemset/problem/1791/C

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
        string s;
        cin >> n;
        cin >> s;
        int ctr = 0;
        for (int i = 0, j = n - 1; i <= j;)
        {
            if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
            {
                ctr++;
                i++;
                j--;
            }
            else
            {
                break;
            }
        }
        cout << n - ctr * 2 << endl;
    }
    return 0;
}