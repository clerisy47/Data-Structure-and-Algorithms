// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define INFINITY LLONG_MAX >> 1
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> a = {
        {"Icosahedron", 20},
        {"Cube", 6},
        {"Dodecahedron", 12},
        {"Tetrahedron", 4},
        {"Octahedron", 8}};
    {
        int n;
        cin >> n;
        int ctr = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            string s;
            cin >> s;
            ctr += a[s];
        }
        cout << ctr << endl;
    }
    return 0;
}