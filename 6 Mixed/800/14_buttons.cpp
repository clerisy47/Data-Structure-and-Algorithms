// https://codeforces.com/problemset/problem/1858/A

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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if (n1 > n2)
        {
            cout << "First" << endl;
        }
        else if (n1 < n2)
        {
            cout << "Second" << endl;
        }
        else
        {
            if (n3 % 2 == 1)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
    }
    return 0;
}