// https://codeforces.com/problemset/problem/1237/A

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
#define coutv(v) do { for (const auto& elem : (v)) cout << elem << endl; cout << endl; } while (0)
#define cin2d(v, rows, cols) do { (v).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (v)[i][j]; } while (0)
#define cout2d(v) do { for (const auto& row : (v)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
constexpr int pctr(int x) { return __builtin_popcountll(x); }



void solve()
{
    int n;
    cin>>n;
    vector<int> v;
    vector<bool> v1(n);
    cinv(v, n);
    for(int i=0; i<=n-1; i++){
        if(v[i]%2!=0){
            v1[i]=true;
        }
        v[i]=floor(v[i]/2.0);
    }
    int ctr = accumulate(v.begin(), v.end(), 0ll);
    if(ctr>0){
        for(int i=0; i<=n-1 && ctr!=0; i++){
            if(v1[i]){
                v[i]--;
                ctr--;
            }
        }
    }
    else{
        for(int i=0; i<=n-1 && ctr!=0; i++){
            if(v1[i]){
                v[i]++;
                ctr++;
            }
        }
    }

    coutv(v);
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    // cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}