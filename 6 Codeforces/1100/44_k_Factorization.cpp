// https://codeforces.com/problemset/problem/797/A

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

void solve()
{
    int n, o;
    cin>>n>>o;
    vector<int> r;
    bool f=false;
    if(o==1){
        cout<<n<<endl;
        return;
    }
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            r.push_back(i);
            n/=i;
            if(r.size()==o-1){
                f=true;
                break;
            }
        }
        if(f){
            break;
        }
    }
    if(n!=1){
        r.push_back(n);
    }
    if(r.size()==o){
        cout<<r<<endl;
    }
    else{
        cout<<-1<<endl;
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