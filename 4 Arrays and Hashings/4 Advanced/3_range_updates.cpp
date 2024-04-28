// add number in given range for each query

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {5, 1, 3, 6, 4, 2, 8, 1, 1, 9}, arr_update[10] = {0}, q, l, r, x, ctr = 0;
    cin >> q;
    while (q--)
    {
        cin >> l >> r >> x;
        arr_update[l] = x;
        arr_update[r + 1] = -x;
    }
    for (int i = 0; i <= 9; i++)
    {
        ctr += arr_update[i];
        arr[i] += ctr;
    }
    cout << endl;
    for (int x : arr)
    {
        cout << x << endl;
    }
    return 0;
}

// TC: O(n) // with segment trees (lazy propagation) it takes O(nlogn)
