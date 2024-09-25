#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
#define endl '\n'
#define inf LLONG_MAX >> 1
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


// prefix sum
inline void solve()
{
    int n, n1;
    cin>>n>>n1;
    vector<int> v(n);
    cin>>v;
    vector<int> v1(n);
    v1[0]=v[0];

    // if original array can be modified just do v[i]^=v[i-1] (similarly for sum)
    for(int i=1; i<=n-1; i++){
        v1[i]=v[i]^v1[i-1];
    }
    while(n1--){
        int n2, n3;
        cin>>n2>>n3;
        if(n2==1){
            cout<<v1[n3-1]<<endl;
        }
        else{
            cout<<(v1[n3-1]^v1[n2-1-1])<<endl;
        }
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