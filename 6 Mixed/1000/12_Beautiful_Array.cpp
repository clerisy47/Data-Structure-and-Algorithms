// https://codeforces.com/problemset/problem/1715/B

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
    int n, n1, n2, n3;
    cin>>n>>n1>>n2>>n3;
    int t= n1*n2;
    if(t>n3){
        cout<<-1<<endl;
    }
    else if(n3-t<=n1-1){
        for(int i=0; i<=n-2; i++){
            cout<<0<<" ";
        }
        cout<<n3<<endl;
    }
    else{
        vector<int> v;
        t+=n1-1;
        int sum=t;
        v.push_back(t);
        while(sum+n1-1<=n3 && (int)v.size()<=n-2){
            v.push_back(n1-1);
            sum+=n1-1;
        }
        v.push_back(n3-sum);
        if(v.back()>=n1){
            cout<<-1<<endl;
        }
        else{
            for(;v.size()!=n;){
                v.push_back(0);
            }
            coutv(v);
        }
    }
}


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