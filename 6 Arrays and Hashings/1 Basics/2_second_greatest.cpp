#include <bits/stdc++.h>
using namespace std;

// Brute Force
int second_greatest_integer_brute(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] != arr[arr.size() - 1])
        {
            return arr[i];
        }
    }
    return arr[0];
}
// Time Complexity: O(nlogn) + n (worst case)
// Space Complexity: O(1)

int second_greatest_integer(vector<int> &arr)
{
    int greatest = max(arr[0], arr[1]);
    int second_greatest = min(arr[0], arr[1]);
    for (int i = 2; i <= arr.size() - 1; i++)
    {
        if (arr[i] > greatest)
        {
            second_greatest = greatest;
            greatest = arr[i];
        }
        else if (arr[i] > second_greatest && arr[i] != greatest)
        {
            second_greatest = arr[i];
        }
    }

    return second_greatest;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> n = {1, 2, 47, 3, 4, 7, 47, 47, 2};
    cout << second_greatest_integer(n);
    return 0;
}
