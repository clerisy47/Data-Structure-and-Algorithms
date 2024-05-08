#include <bits/stdc++.h>
using namespace std;

// Brute Force
int maxSubarraySum(vector<int> arr, int n)
{
    int max_sum = -1e9;
    for (int i = 0; i <= n - 1; i++)
    {
        int curr_sum = 0;
        for (int j = i; j <= n - 1; j++)
        {
            curr_sum += arr[j];
            max_sum = max(curr_sum, max_sum);
        }
    }
    return max_sum;
}

// Kadane's Algorithm
int maxSubarraySum(vector<int> arr, int n)
{
    int max_sum = -1e9;
    int curr_sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        curr_sum += arr[i];
        if (curr_sum > max_sum)
            max_sum = curr_sum;
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return max_sum;
}

// If question demands to print the maximum subarray
void print(vector<int> arr, int n)
{
    int max_sum = 0; // It is given that empty subarray is also to be considered or else max_sum=llong_min
    int curr_sum = 0;
    int l = 0, r = 0;
    int max_l = 0, max_r = -1; // In case for empty subarray it shouldn't print anything hence max_r=-1
    for (int i = 0; i <= n - 1; i++)
    {
        r = i;
        curr_sum += arr[i];
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
            max_l = l;
            max_r = r;
        }
        if (curr_sum < 0)
        {
            curr_sum = 0;
            l = i + 1; // i+1 and not i as after adding current index, it became negative
        }
    }
    for (int i = max_l; i <= max_r; i++)
        cout << arr[i] << " ";
}

int main()
{
    // Test the print function
    vector<int> arr = {1, -3, 4, -2, -1, 6};
    int n = arr.size();
    print(arr, n);
    return 0;
}