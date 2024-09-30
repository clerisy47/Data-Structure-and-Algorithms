// https://cses.fi/problemset/task/1081

#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define debug(...) 47
#else
#include "debug.h"
#endif
#define int long long
#define float long double
#define endl '\n'
#define inf LLONG_MAX >> 1
#define all(x) (x).begin(), (x).end()
#define cinv(con, len) do { (con).resize(len); for (int i = 0; i < (len); ++i) cin >> (con)[i]; } while (0)
#define coutv(con) do { for (const auto& elem : (con)) cout << elem << " "; cout << endl; } while (0)
#define cinvv(con, rows, cols) do { (con).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (con)[i][j]; } while (0)
#define coutvv(con) do { for (const auto& row : (con)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define cinvp(con, len) do { (con).resize(len); for (int i = 0; i < (len); ++i) cin >> (con)[i].first >> (con)[i].second; } while (0)
#define coutvp(con) do { for (const auto& p : (con)) cout << p.first << " " << p.second << " "; cout << endl; } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define __lcm(x, y) ((x) * (y) / __gcd((x), (y)))
constexpr int pctr(int x) { return __builtin_popcountll(x); }
int mod = 1000000007ll;

inline void solve()
{
    int n;
    vector<int> v;
    cin>>n;
    cinv(v, n);
    int t = *max_element(v.begin(), v.end());
    vector<int> v1(t+1);
    for(int i=0; i<=n-1; i++){
        v1[v[i]]++;
    }
    int r;
    for(int i=1; i<=t; i++){
        int c=0;
        for(int j=i; j<=t; j+=i){
            c+= v1[j];
        }
        if(c>=2){
            r=i;
        }
    }
    cout<<r<<endl;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    // cin >> tc;
    
    for(int i=0; i<=tc-1; i++){
        solve();
    }
    return 0;
}