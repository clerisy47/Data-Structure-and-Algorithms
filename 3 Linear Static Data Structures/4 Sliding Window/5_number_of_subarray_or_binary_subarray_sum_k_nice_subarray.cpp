// https://leetcode.com/problems/subarray-sum-equals-k/description/
// https://leetcode.com/problems/binary-subarrays-with-sum/
// https://leetcode.com/problems/count-number-of-nice-subarrays/

// first two questions are same
// for third one just convert each elements to 1 if they're odd and 0 if they're even, then it will be equivalent to second question

#include <bits/stdc++.h>
using namespace std;

// Brute Force
int subarraySum(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = 0, ctr = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            sum += arr[j];
            if (sum == k)
                ctr++;
            if (sum > k) // remove this if negative elements may be present
                break;
        }
        sum = 0;
    }
    return ctr;
}

// Hashing
// Prefix Sum
// Optimal (For arrays with both positive and negative elements)
int subarraySum(vector<int> &arr, int k)
{
    unordered_map<int, int> m; // unordered map is used instead of maps for zero elements to be counted as extra subarray
    int n = arr.size(), sum = 0, ctr = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            ctr++;
        }
        ctr += m[sum - k];
        m[sum]++;
    }
    return ctr;
}

// Sliding window
// Optimal (For arrays with positive elements only including zeroes) / binary subarray sum

// finds number of elements <=k
int atMostSum(vector<int> &arr, int k)
{
    int ctr = 0, n = arr.size(), sum = 0;
    for (int i = 0, j = 0; j <= n - 1; j++) // we're counting number of substrings and not finding the longest substring hence we must use while loop
    {
        sum += arr[j];
        while (sum > k)
        {
            sum -= arr[i];
            i++;
        }

        ctr += j - i + 1;
    }
    return ctr;
}

// finds k
int subarraySum(vector<int> &arr, int k)
{
    return atMostSum(arr, k) - atMostSum(arr, k - 1);
}

// for counting nice subarrays add % 2 in  sum += arr[j] and sum -= arr[i] as sum += arr[j]%2 and sum -= arr[i]%2


int main()
{
    vector<int> nums = {5, 1, 2, 3, 4, 2, 0, 5, 6, 10};
    int target = 12;

    int result = subarraySum(nums, target);
    cout << "Number of subarrays with sum " << target << ": " << result << endl;

    return 0;
}
