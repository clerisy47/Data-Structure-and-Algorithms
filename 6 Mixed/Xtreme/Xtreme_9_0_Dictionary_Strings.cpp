// https://www.hackerrank.com/contests/ieeextreme-challenges/challenges/dictionary-strings

#include <iostream>
// #include <vector>
#include <cstring>
#include <string>
using namespace std;
// #define int long long
#define endl '\n'
// #define MOD 1000000007
// #define INFINITY LLONG_MAX >> 1

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, nn;
        cin >> n >> nn;
        int a[26];
        memset(a, 0, sizeof(a));
        for (int i = 0; i <= n - 1; i++)
        {
            int aa[26];
            memset(aa, 0, sizeof(aa));
            string s;
            cin >> s;
            for (auto &x : s)
            {
                aa[x - 'a']++;
            }
            for (int i = 0; i <= 26 - 1; i++)
            {
                a[i] = max(a[i], aa[i]);
            }
        }
        for (int i = 0; i <= nn - 1; i++)
        {
            int aa[26];
            memset(aa, 0, sizeof(aa));
            string s;
            cin >> s;
            for (auto &x : s)
            {
                aa[x - 'a']++;
            }
            bool f = false;
            int c = 0;
            for (int i = 0; i <= 26 - 1; i++)
            {
                if (aa[i] < a[i])
                {
                    c += a[i] - aa[i];
                }
                else if (aa[i] > a[i])
                {
                    f = true;
                }
            }
            if (!c && !f)
            {
                cout << "Yes" << " " << "Yes" << endl;
            }
            else if (!c && f)
            {
                cout << "Yes" << " " << "No" << endl;
            }
            else
            {
                cout << "No" << " " << c << endl;
            }
        }
    }
    return 0;
}