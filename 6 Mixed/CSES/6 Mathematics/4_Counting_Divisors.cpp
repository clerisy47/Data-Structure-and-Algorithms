// https://cses.fi/problemset/task/1713

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
#define all(x) (x).begin(), (x).end()
#define cinv(vec, len) do { (vec).resize(len); for (int i = 0; i < (len); ++i) cin >> (vec)[i]; } while (0)
#define coutv(vec) do { for (const auto& elem : (vec)) cout << elem << " "; cout << endl; } while (0)
#define cin2d(vec, rows, cols) do { (vec).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (vec)[i][j]; } while (0)
#define cinvp(vec, len) do { (vec).resize(len); for (int i = 0; i < (len); ++i) cin >> (vec)[i].first >> (vec)[i].second; } while (0)
#define coutvp(vec) do { for (const auto& p : (vec)) cout << p.first << " " << p.second << " "; cout << endl; } while (0)
#define cout2d(vec) do { for (const auto& row : (vec)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
#define __lcm(x, y) ((x) * (y) / __gcd((x), (y)))
constexpr int pctr(int x) { return __builtin_popcountll(x); }
int mod = 1000000007ll;

int N = 1e6;
vector<int> numDivisors(N + 1, 1);

void fillSieve()
{
    for (int i = 2; i<= N; i++)
    {
        for (int j = i; j <= N; j +=i)
        {
            numDivisors[j]++;
        }
    }
}

inline void solve()
{
    int n;
    cin>>n;
    cout<<numDivisors[n]<<endl;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1;
    cin >> tc;
    fillSieve();
    for(int i=0; i<=tc-1; i++){
        solve();
    }
    return 0;
}