// https://www.hackerrank.com/contests/ieeextreme-challenges/challenges/shortening-in-the-real-world

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX >> 1

string encodeBase62(unsigned long long n)
{
    if (n == 0)
    {
        return "0";
    }

    string base62_chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string base62;

    for (unsigned long long i = n; i != 0; i /= 62)
    {
        base62 = base62_chars[i % 62] + base62;
    }

    return base62;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        for (int i = 0; i <= n - 1; i++)
        {
            string ss;
            cin >> ss;
            int nn = s.size(), nnn = ss.size();
            string sss;
            for (int j = 0; j <= nnn - 1; j++)
            {
                sss.push_back(ss[j] ^ s[j % nn]);
            }
            unsigned long long r;
            for (int k = sss.size() - 8; k <= sss.size() - 1; k++)
            {
                r = (r << 8) | static_cast<unsigned int>(sss[k]); // shifting num by 8 bytes to create space for new character
            }
            cout << s << "/" << encodeBase62(r) << endl;
        }
    }
    return 0;
}