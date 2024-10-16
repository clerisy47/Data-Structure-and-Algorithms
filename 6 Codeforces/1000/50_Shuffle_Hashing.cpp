// https://codeforces.com/problemset/problem/1278/A

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
#define cin2d(v, rows, cols) do { (v).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (v)[i][j]; } while (0)
#define cout2d(v) do { for (const auto& row : (v)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
constexpr int pctr(int x) { return __builtin_popcountll(x); }



void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    multiset<char> ms1, ms2;
    for(int i=0; i<=s1.size()-1; i++){
        ms1.insert(s1[i]);
    }
    for(int i=0; i<=s1.size()-1; i++){
        ms2.insert(s2[i]);
        if(ms1==ms2){
            cout<<"YES"<<endl;
            return;
        }
    }
    for(int i=1, j=s1.size(); j<=s2.size()-1; i++, j++){
        auto it=ms2.find(s2[i-1]);
        ms2.erase(it);
        ms2.insert(s2[j]);
        if(ms1==ms2){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

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