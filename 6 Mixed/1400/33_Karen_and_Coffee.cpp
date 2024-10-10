// https://codeforces.com/problemset/problem/816/B

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
#define __lcm(n, n1) ((n) * (n1) / __gcd((n), (n1)))
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
int mod = 1000000007ll;



void solve()
{
    int n1, n2, q;
    cin>>n1>>n2>>q;
    int N=2e5+2; // on extra on either side
    vector<int> a(N);
    for(int i=0; i<n1; i++){
        int x, y;
        cin>>x>>y;
        a[x]+=1;
        a[y+1]-=1;
    }
    for(int i=1; i<N; i++){
        a[i]+=a[i-1];
    }
    for (int i = 1; i < N; i++)
    {
        a[i]=a[i]>=n2?1:0;
        a[i] += a[i - 1];
    }
    while(q--){
        int x, y;
        cin>>x>>y;
        cout<<(a[y]-a[x-1])<<endl;
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