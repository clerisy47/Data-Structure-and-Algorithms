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
#define __lcm(n1, n2) ((num1) * (num2) / __gcd((num1), (num2)))
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
    int n1, n2;
    cin >> n1 >> n2;
    int r=inf;
    for (int i = 1; i * i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            if(n1/i <= n2){
                r=min(r, i);
            }
            if(i<=n2){
                r = min(r, n1 / i);
            }
        }
    }
    cout<<r<<endl;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin >> tc;
    
    for(int i=0; i<tc; i++){
        solve();
    }
    return 0;
}