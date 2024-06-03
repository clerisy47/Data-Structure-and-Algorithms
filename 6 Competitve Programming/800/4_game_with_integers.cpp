// https://codeforces.com/problemset/problem/1899/A

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
        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }

    return 0;
}