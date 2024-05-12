#include <bits/stdc++.h>
using namespace std;

// Brute Force
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int maxProd = -1e9;
    for (int i = 0; i <= n - 1; i++)
    {
        int currProd = 1;

        for (int j = i; j <= n - 1; j++)
        {
            currProd *= nums[j];
            maxProd = max(maxProd, currProd);
            if (currProd == 0)
                break;
        }
    }

    return maxProd;
}

// Kadane's algorithm
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int maxProd = -1e9;
    int currProd = 1;
    // need to do it twice from front and back as when there's odd number of negatives, maxProduct can come from either front or back
    for (int i = 0; i <= n - 1; i++)
    {
        currProd *= nums[i];
        maxProd = max(maxProd, currProd);
        if (currProd == 0)
            currProd = 1;
    }
    currProd = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        currProd *= nums[i];
        maxProd = max(maxProd, currProd);
        if (currProd == 0)
            currProd = 1;
    }
    return maxProd;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}