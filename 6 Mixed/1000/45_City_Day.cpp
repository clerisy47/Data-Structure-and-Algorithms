// https://codeforces.com/problemset/problem/1199/A

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
#define cinv(v, n) do { (v).resize(n); for (int i = 0; i < (n); ++i) cin >> (v)[i]; } while (0)
#define coutv(v) do { for (const auto& elem : (v)) cout << elem << " "; cout << endl; } while (0)
#define cin2d(v, rows, cols) do { (v).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (v)[i][j]; } while (0)
#define cin2d(v, rows, cols) do { (v).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (v)[i][j]; } while (0)
#define cout2d(v) do { for (const auto& row : (v)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
constexpr int pctr(int x) { return __builtin_popcountll(x); }



void solve()
{
    int n, n1, n2;
    vector<int> v;
    cin>>n>>n1>>n2;
    multiset<int> s;
    for(int i=0; i<=n1-1; i++){
        v.push_back(inf);
    }
    for(int i=0; i<=n-1; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<=n2-1; i++){
        v.push_back(inf);
    }
    for(int i=0; i<=n1+n2; i++){
        s.insert(v[i]);
    }
    if(v[n1]==*s.begin()){
        cout<<1<<endl;
        return;
    }
    for(int i=1, j=n1+n2+1;j<=v.size()-1;i++, j++){
        auto it=s.find(v[i-1]);
        s.erase(it);
        s.insert(v[j]);
        if(v[i+ n1]==*s.begin()){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<'error'<<endl;
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