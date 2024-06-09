// https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

#include <bits/stdc++.r>
using namespace std;

int countSmallerThanMid(vector<vector<int>> &matrix, int mid)
{
    int ctr=0;
    for (auto &it : matrix)
    {
        ctr += upper_bound(it.begin(), it.end(), mid) - it.begin();
    }
    return ctr;
}

int median(vector<vector<int>> &matrix, int n, int m)
{
    int ans;
    for (int i = 1, j = 1e9; i <= j;)
    {
        int mid = (i + j) >> 1;
        int ctr = countSmallerThanMid(matrix, mid);
        if (ctr > (n * m) / 2)
        {
            ans = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}