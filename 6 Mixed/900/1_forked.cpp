// https://codeforces.com/problemset/problem/1904/A

// instead of thinking where can a knight be to target a king/queen, think, if knight has defeated the king, in the past in which positions can it be

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, x1, y1, x2, y2;
        cin >> n1 >> n2 >> x1 >> y1 >> x2 >> y2;
        set<pair<int, int>> a; // for king
        set<pair<int, int>> b; // for queen
        a.insert({x1 + n1, y1 + n2});
        a.insert({x1 - n1, y1 + n2});
        a.insert({x1 + n1, y1 - n2});
        a.insert({x1 - n1, y1 - n2});

        a.insert({x1 + n2, y1 + n1});
        a.insert({x1 - n2, y1 + n1});
        a.insert({x1 + n2, y1 - n1});
        a.insert({x1 - n2, y1 - n1});

        b.insert({x2 + n1, y2 + n2});
        b.insert({x2 - n1, y2 + n2});
        b.insert({x2 + n1, y2 - n2});
        b.insert({x2 - n1, y2 - n2});

        b.insert({x2 + n2, y2 + n1});
        b.insert({x2 - n2, y2 + n1});
        b.insert({x2 + n2, y2 - n1});
        b.insert({x2 - n2, y2 - n1});

        set<pair<int, int>> ans;

        set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(ans, ans.begin()));

        cout << ans.size() << endl;
    }
    return 0;
}