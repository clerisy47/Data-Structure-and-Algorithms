// https://cses.fi/problemset/task/1755

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
#define cin1d(con, len) do { (con).resize(len); for (int i = 0; i < (len); ++i) cin >> (con)[i]; } while (0)
#define cout1d(con) do { for (const auto& elem : (con)) cout << elem << " "; cout << endl; } while (0)
#define cin2d(con, rows, cols) do { (con).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (con)[i][j]; } while (0)
#define cout2d(con) do { for (const auto& row : (con)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define cin1dp(con, len) do { (con).resize(len); for (int i = 0; i < (len); ++i) cin >> (con)[i].first >> (con)[i].second; } while (0)
#define cout1dp(con) do { for (const auto& p : (con)) cout << p.first << " " << p.second << " "; cout << endl; } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define __lcm(x, y) ((x) * (y) / __gcd((x), (y)))
constexpr int pctr(int x) { return __builtin_popcountll(x); }
int mod = 1000000007ll;



inline void solve()
{
    string s;
    cin>>s;
    vector<int> v(26);
    bool f = false;
    string t;
    for(auto &x: s){
        v[x-'A']++;
    }
    for(int i=0; i<=25; i++){
        if(v[i]%2 && !f){
            f=true;
            t='A'+i;
        }
        else if(v[i]%2 && f){
            cout<<"NO SOLUTION"<<endl;
            return;
        }
    }
    for(int i=0; i<=25; i++){
        cout<< string(v[i]/2, 'A'+i);
    }
    if(f){
        cout<<t;
    }
    // or save the string above and reverse it
    for(int i=25; i>=0; i--){
        cout<< string(v[i]/2, 'A'+i);
    }
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