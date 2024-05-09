#include <bits/stdc++.h>
using namespace std;

// bfs style greedy approach
int jump(vector<int> &arr)
{
    int n = arr.size();
    int ctr = 0;
    for (int l = 0, r = 0; r <= n - 2; l, r)
    {
        int farthest = 0;
        for (int i = l; i <= r; i++)
        {
            if (i + arr[i] > farthest)
                farthest = i + arr[i];
        }
        l = r + 1;
        r = farthest;
        ctr++;
    }
    return ctr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}