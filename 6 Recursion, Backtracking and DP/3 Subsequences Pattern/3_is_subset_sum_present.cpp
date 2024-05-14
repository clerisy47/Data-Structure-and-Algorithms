// https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

#include <bits/stdc++.h>
using namespace std;

bool generate(int i, int sum, vector<int> &arr, int k)
{
    if (sum > k) // only if array contain positive numbers only
        return false;

    if (i == arr.size())
    {
        return sum == k;
    }

    sum += arr[i];
    if (generate(i + 1, sum, arr, k))
        return true;
    sum -= arr[i];

    if (generate(i + 1, sum, arr, k))
        return true;

    return false;
}

bool isSubsetSum(vector<int> &arr, int k)
{
    return generate(0, 0, arr, k);
}

// dp solution in dp folder note that there recursion is from n-1 to 0 not 0 to n-1 and k is reduced in each calls not in backtracking way

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}