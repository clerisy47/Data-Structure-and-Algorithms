// https://codeforces.com/problemset/problem/1521/A

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
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define __lcm(x, y) ((x) * (y) / __gcd((x), (y)))
template <typename T>
istream& operator>>(istream& in, vector<T>& vec) { for (auto& elem : vec) in >> elem; return in; }
template <typename T>
ostream& operator<<(ostream& out, const vector<T>& vec) { for (const auto& elem : vec) out << elem << " "; return out; }
template <typename T>
istream& operator>>(istream& in, vector<vector<T>>& vec) { for (auto& row : vec) for (auto& elem : row) in >> elem; return in; }
template <typename T>
ostream& operator<<(ostream& out, const vector<vector<T>>& vec) { for (const auto& row : vec) { for (const auto& elem : row) out << elem << " "; } return out; }
template <typename T1, typename T2>
istream& operator>>(istream& in, vector<pair<T1, T2>>& vec) { for (auto& p : vec) in >> p.first >> p.second; return in; }
template <typename T1, typename T2>
ostream& operator<<(ostream& out, const vector<pair<T1, T2>>& vec) { for (const auto& p : vec) out << p.first << " " << p.second << endl; return out; }
constexpr int pctr(int x) { return __builtin_popcountll(x); }
int mod = 1000000007ll;

inline void solve()
{
    int n, n1;
    cin>>n>>n1;
    int t, t1=1, t2=2;
    if(n1==1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<n*n1<<" "<<n<<" "<< n*(n1+1) <<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin >> tc;
    
    for(int i=0; i<=tc-1; i++){
        solve();
    }
    return 0;
}