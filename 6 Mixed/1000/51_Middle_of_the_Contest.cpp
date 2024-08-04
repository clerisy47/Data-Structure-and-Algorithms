// https://codeforces.com/problemset/problem/1133/A

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
#define cin2d(v, rows, cols) do { (v).resize(rows, vector<int>(cols)); for (int i = 0; i < (rows); ++i) for (int j = 0; j < (cols); ++j) cin >> (v)[i][j]; } while (0)
#define cout2d(v) do { for (const auto& row : (v)) { for (const auto& elem : row) cout << elem << " "; cout << endl; } } while (0)
#define coutb(CONDITION) cout << (CONDITION ? "YES" : "NO") << endl;
constexpr int pctr(int x) { return __builtin_popcountll(x); }

pair<int, int> util(string s){
    pair<int, int> r={0, 0};
    string temp="";
    temp.push_back(s[0]);
    temp.push_back(s[1]);
    r.first=stoi(temp);
    temp="";
    temp.push_back(s[3]);
    temp.push_back(s[4]);
    r.second=stoi(temp);
    return r;
}

void solve()
{
    string s1, s2;
    cin>>s1>>s2;
    pair<int, int> t1= util(s1), t2=util(s2);
    int minutes = (t1.first*60+ t1.second + t2.first*60 + t2.second)/2;
    cout<<setfill('0')<<setw(2)<<minutes/60<<":"<<setfill('0')<<setw(2)<<minutes%60<<endl;
}


// void solve()
// {
//     string s1, s2;
//     cin>>s1>>s2;
//     pair<int, int> t1= util(s1), t2=util(s2), r;
//     r.first = (t1.first+t2.first)/2;
//     r.second = (t1.second+t2.second)/2;
//     if((t1.first+t2.first)%2!=0){
//         r.second += 30;
//     }
//     if(r.second>=60){
//         r.first++;
//         r.second %= 60;
//     }
//     cout<<setfill('0')<<setw(2)<<r.first<<":"<<setfill('0')<<setw(2)<<r.second<<endl;
// }


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