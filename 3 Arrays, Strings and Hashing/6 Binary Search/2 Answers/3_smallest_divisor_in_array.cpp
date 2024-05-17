// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

#include <bits/stdc++.h>
using namespace std;

int division(vector<int> &arr, int num)
{
    int ans = 0;
    for (auto &x : arr)
    {
        ans += ceil(1.0 * x / num);
    }
    return ans;
}

int smallestDivisor(vector<int> &arr, int threshold)
{
    int maxEle = *max_element(arr.begin(), arr.end());
    int ans = -1;
    for (int i = 1, j = maxEle; i <= j;) // minimum divisor can be 1
    {
        int mid = (i + j) / 2;
        int sum_quo = division(arr, mid);
        if (threshold >= sum_quo)  
        {
            j = mid - 1;    // mid is inversely proportional to sum_quo
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