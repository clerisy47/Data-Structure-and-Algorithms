// https://codeforces.com/problemset/problem/327/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007ll
#define endl '\n'
#define inf LLONG_MAX >> 1

template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
    for (auto &elem : vec)
    {
        is >> elem;
    }
    return is;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a;
    int r = 0;
    vector<int> a1;

    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] == 1)
        {
            r++;
            a1.push_back(-1);
        }
        else
        {
            a1.push_back(1);
        }
    }
    if (r == n)
    {
        r--;
    }
    int currSum = 0, maxSum = 0;
    for (auto &x : a1)
    {
        currSum += x;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << r + maxSum << endl;
}

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     cin >> a;
//     int r = -1;
//     for (int i = 0; i <= n - 1; i++)
//     {

//         for (int j = i; j <= n - 1; j++)
//         {
//             int c = 0;
//             for (int k = 0; k <= n - 1; k++)
//             {
//                 if (k >= i && k <= j)
//                 {
//                     if (a[k] == 0)
//                     {
//                         c++;
//                     }
//                 }
//                 else
//                 {
//                     if (a[k] == 1)
//                     {
//                         c++;
//                     }
//                 }
//             }
//             r = max(r, c);
//         }
//     }

//     cout << r << endl;
//     return 0;
// }