// https://codeforces.com/problemset/problem/522/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &depth)
{
    visited[vertex] = true;
    for (auto child : graph[vertex])
    {
        if (!visited[child])
        {
            depth[child] = depth[vertex] + 1;
            dfs(child, graph, visited, depth);
        }
    }
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (const auto &elem : vec)
    {
        os << elem << " ";
    }
    return os;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    map<string, int> m;
    vector<vector<int>> graph(n + 1);
    vector<bool> visited(n);
    vector<int> depth(n + 1);
    int i = 0;
    while (n--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        cin >> s2;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        if (m.find(s2) == m.end())
        {
            m[s2] = i;
            i++;
        }
        if (m.find(s1) == m.end())
        {
            m[s1] = i;
            i++;
        }

        graph[m[s2]].push_back(m[s1]);
    }
    dfs(0, graph, visited, depth);
    cout << *max_element(depth.begin(), depth.end()) + 1 << endl;
    return 0;
}