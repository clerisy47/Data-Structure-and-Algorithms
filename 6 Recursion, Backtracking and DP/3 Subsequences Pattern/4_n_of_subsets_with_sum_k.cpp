#include <bits/stdc++.h>
using namespace std;

int generate(int i, int sum, vector<int> &arr, int k)
{
    if (sum > k) // only if array contain positive numbers only
        return 0;

    if (i == arr.size())
    {
        if (sum == k)
            return 1;
        return 0;
    }

    sum += arr[i];
    int l = generate(i + 1, sum, arr, k);
    sum -= arr[i];

    int r = generate(i + 1, sum, arr, k);
    return l + r;
}

int perfectSum(int n, int k, vector<int> &arr)
{
    return generate(0, 0, arr, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}