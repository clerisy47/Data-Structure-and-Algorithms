// https://codeforces.com/problemset/problem/1862/B

#include <bits/stdc++.h>
using namespace std;

vector<int> inputVector(int n)
{
    vector<int> arr(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

void printVector(vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr = inputVector(n);
        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i = 1; i <= n - 1; i++)
        {
            if (arr[i - 1] != 1)
            {
                ans.push_back(1);
            }
            ans.push_back(arr[i]);
        }
        cout << ans.size() << endl;
        printVector(ans);
    }
    return 0;
}