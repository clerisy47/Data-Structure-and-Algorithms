// https://leetcode.com/problems/find-a-peak-element-ii/description/

// according to question, there are no equal elements in array

#include <bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>> &arr) // returning the index
{
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0, j = n - 1; i <= j;)
    {
        int mid = (i + j) / 2;

        int maxi = max_element(arr[mid].begin(), arr[mid].end()) - arr[mid].begin();

        int top = mid - 1 >= 0 ? arr[mid - 1][maxi] : -1;
        int bottom = mid + 1 <= n - 1 ? arr[mid + 1][maxi] : -1;


        if (arr[mid][maxi] > top && arr[mid][maxi] > bottom)
        {
            return {mid, maxi};
        }
        else if (arr[mid][maxi] > bottom)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return {-1, -1}; // this statement has no use just writing because compiler gives error without return statement
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}