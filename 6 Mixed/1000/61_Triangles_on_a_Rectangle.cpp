// https://codeforces.com/problemset/problem/1620/B

#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define debug(...) 47
#else
#include "debug.h"
#endif
#define int long long
#define float long double
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1
#define all(x) (x).begin(), (x).end()
#define cinv(v, n) do { (v).resize(n); for (int i = 0; i < (n); ++i) cin >> (v)[i]; } while (0)
#define coutv(v) do { for (const auto& elem : (v)) cout << elem << " "; cout << endl; } while (0)
#define cin2d(v, rows, cols) do { (v).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (v)[i][j]; } while (0)
#define cinvp(v, n) do { (v).resize(n); for (int i = 0; i < (n); ++i) cin >> (v)[i].first >> (v)[i].second; } while (0)
#define coutvp(v) do { for (const auto& p : (v)) cout << p.first << " " << p.second << " "; cout << endl; } while (0)
#define cout2d(v) do { for (const auto& row : (v)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
constexpr int pctr(int x) { return __builtin_popcountll(x); }



inline void solve()
{
    int n, n1;
    cin>>n>>n1;
    int n2;
    cin>>n2;
    vector<int> v;
    cinv(v, n2);
    int n3;
    cin>>n3;
    vector<int> v1;
    cinv(v1, n3);
    int n4;
    cin>>n4;
    vector<int> v2;
    cinv(v2, n4);
    int n5;
    cin>>n5;
    vector<int> v3;
    cinv(v3, n5);
    cout<<max({n*(v3[n5-1]-v3[0]),n*(v2[n4-1]-v2[0]),n1*(v1[n3-1]-v1[0]),n1*(v[n2-1]-v[0])})<<endl;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}