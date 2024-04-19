#include <bits/stdc++.h>
using namespace std;

// Brute Force
int findAllSubarraysWithGivenSum(vector<int> &a, int k)
{
    int n = a.size();
    int sum = 0, count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            sum += a[j];
            if (sum == k)
                count++;
            if (sum > k)
                break;
        }
        sum = 0;
    }
    return count;
}

// Hashing
// Prefix Sum
// Optimal (For arrays with both positive and negative elements)
int findAllSubarraysWithGivenSum(vector<int> &a, int k)
{
    unordered_map<int, int> m;              // unordered map is used instead of hashmaps for zero elements to be counted as extra subarray
    int n = a.size(), sum = 0, count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            count++;
        }
        count += m[sum - k];
        m[sum]++;
    }
    return count;
}

// 2 Pointer
// Optimal (For arrays with positive elements only including zeroes)
int findAllSubarraysWithGivenSum(vector<int> &a, int k)
{
    int count = 0, sum = 0, i = 0, n = a.size();
    for (int j = 0; j <= n - 1; j++)
    {
        sum += a[j];
        while (i <= j && sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
            count++;
    }
    return count;
}

int main()
{
    vector<int> nums = {5, 1, 2, 3, 4, 2, 0, 5, 6, 10};
    int target = 12;

    int result = findAllSubarraysWithGivenSum(nums, target);
    cout << "Number of subarrays with sum " << target << ": " << result << endl;

    return 0;
}
