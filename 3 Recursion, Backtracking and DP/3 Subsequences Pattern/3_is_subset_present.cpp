#include <bits/stdc++.h>
using namespace std;

bool generate(int i, int sum, vector<int> &arr, int k)
{
    if (sum > k) // only if array contain positive numbers only
        return false;

    if (i == arr.size())
    {
        if (sum == k)
            return true;
        return false;
    }

    sum += arr[i];
    if (generate(i + 1, sum, arr, k))
        return true;
    sum -= arr[i];

    if (generate(i + 1, sum, arr, k))
        return true;

    return false;
}

bool isSubsetPresent(int n, int k, vector<int> &arr)
{
    return generate(0, 0, arr, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}