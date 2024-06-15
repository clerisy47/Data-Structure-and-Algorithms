// https://codeforces.com/problemset/problem/1877/A

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
        int sum = 0;
        n--;
        while (n--)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cout << (-sum) << endl;
    }
    return 0;
}