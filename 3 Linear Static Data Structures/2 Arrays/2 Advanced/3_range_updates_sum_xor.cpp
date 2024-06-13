// add number in given range of index in an array (both inclusive) for each query
// xor each number in given range of index in an array (both inclusive) for each query

#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> inputVector(int n)
{
    vector<int> arr;
    int x;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> x;
        arr.push_back(x);
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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, l, r, x;
        cin >> n >> q;
        vector<int> a = inputVector(n);
        vector<int> b(n + 1);
        while (q--)
        {
            cin >> l >> r >> x;
            b[l] += x;     // for xor b[l] ^= x
            b[r + 1] -= x; // decrease element just right to range
            // for xor b[r+1] ^= x as xor are operative inverse of each other
        }
        for (int i = 1; i <= n - 1; i++)
        {
            b[i] += b[i - 1];
        }
        for (int i = 0; i <= n - 1; i++)
        {
            a[i] += b[i];
        }
        printVector(a);
    }
    return 0;
}

// TC: O(n) // with segment trees (lazy propagation) it takes O(nlogn)
