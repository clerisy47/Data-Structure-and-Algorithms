// https://codeforces.com/problemset/problem/486/B

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
#define cout2d(v) do { for (const auto& row : (v)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
constexpr int pctr(int x) { return __builtin_popcountll(x); }



void solve()
{
    int n1, n2;
    cin>>n1>>n2;
    vector<vector<int>> a, b(n1, vector<int> (n2, 1)), c(n1, vector<int> (n2,0));
    cin2d(a, n1, n2);
    for(int i=0; i<=n1-1; i++){
        for(int j=0; j<=n2-1; j++){
            if(a[i][j]==0){
                for(int k=0; k<=n1-1; k++){
                    b[k][j]=0;
                }
                for(int k=0; k<=n2-1; k++){
                    b[i][k]=0;
                }
            }
        }
    }
    for(int i=0; i<=n1-1; i++){
        for(int j=0; j<=n2-1; j++){
            for(int k=0; k<=n1-1; k++){
                c[i][j] |= b[k][j];
            }
            for(int k=0; k<=n2-1; k++){
                c[i][j] |= b[i][k];
            }
        }
    }
    if(a==c){
        cout<<"YES"<<endl;
        cout2d(b);
    }
    else{
        cout<<"NO"<<endl;
    }
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