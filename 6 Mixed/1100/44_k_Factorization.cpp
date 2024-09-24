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

int N = 1e5;
vector<bool> isPrime(N + 1, true);
vector<int> prime;
void fillSieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i<=N; i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }
}

inline void solve()
{
    int n, n1;
    cin>>n>>n1;
    vector<int> r;
    for(int i=0;;){
        if(r.size()==n1-1 && n!=1){
            r.push_back(n);
            cout<<r<<endl;
            return;
        }
        if(n==1){
            cout<<-1<<endl;
            return;
        }
        if(n%prime[i]==0){
            r.push_back(prime[i]);
            n/=prime[i];
        }
        else{
            i++;
        }
    }
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    // cin >> tc;
    fillSieve();
    for(int i=0; i<=tc-1; i++){
        solve();
    }
    return 0;
}