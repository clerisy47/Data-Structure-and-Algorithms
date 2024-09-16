// https://codeforces.com/problemset/problem/1691/B

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
#define cinv(vec, len) do { (vec).resize(len); for (int i = 0; i < (len); ++i) cin >> (vec)[i]; } while (0)
#define coutv(vec) do { for (const auto& elem : (vec)) cout << elem << " "; cout << endl; } while (0)
#define cin2d(vec, rows, cols) do { (vec).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (vec)[i][j]; } while (0)
#define cinvp(vec, len) do { (vec).resize(len); for (int i = 0; i < (len); ++i) cin >> (vec)[i].first >> (vec)[i].second; } while (0)
#define coutvp(vec) do { for (const auto& p : (vec)) cout << p.first << " " << p.second << " "; cout << endl; } while (0)
#define cout2d(vec) do { for (const auto& row : (vec)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
std::string operator*(const std::string &str, int times) { std::string result; for (int i = 0; i < times; ++i) result += str; return result; } std::string operator*(int times, const std::string &str) { return str * times; }
#define __lcm(x, y) ((x) * (y) / __gcd((x), (y)))
constexpr int pctr(int x) { return __builtin_popcountll(x); }
#define ceil(x) (int) ceil(x)
#define floor(x) (int) floor(x)



inline void solve()
{
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=0; i<=n-1; i++){
        int x;
        cin>>x;
        v.push_back({x, i});
    }
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    sort(v.begin(), v.end());
    vector<int> r;
    for(int i=0; i<=n-1; i++){
        r.push_back(v[i].second+1);
    }
    for(int i=0, j=1; j<=n-1; i=j){
        while(j<=n-1 && v[j].first==v[i].first){
            j++;
        }
        if(j-i==1){
            cout<<-1<<endl;
            return;
        }
        else{
            rotate(r.begin()+i, r.begin()+i+1, r.begin()+j);
        }
    }
    coutv(r);
}

// inline void solve(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     cinv(v, n);
//     for(int i=1; i<=n-1; i++){
//         if(v[i]!=v[0]){
//             cout<<-1<<endl;
//             return;
//         }
//     }
//     cout<<n<<" ";
//     for(int i=1; i<=n-1; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i=0; i<=tc-1; i++){
        solve();
    }
    return 0;
}