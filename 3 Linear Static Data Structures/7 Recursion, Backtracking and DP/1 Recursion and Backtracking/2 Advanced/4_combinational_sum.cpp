#include <bits/stdc++.h>
using namespace std;

void util(int i, int k, vector<int> &a, vector<int> &t, vector<vector<int>> &r)
{
    if (k == 0)
    {
        r.push_back(t);
        return;
    }
    if (i < 0 || k < 0)
    {
        return;
    }
    t.push_back(a[i]);
    util(i, k - a[i], a, t, r);
    t.pop_back();

    util(i - 1, k, a, t, r);
}

vector<vector<int>> combinationSum(vector<int> &a, int k)
{
    vector<vector<int>> r;
    vector<int> t;
    util(a.size() - 1, k, a, t, r);
    return r;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
    }
    return 0;
}