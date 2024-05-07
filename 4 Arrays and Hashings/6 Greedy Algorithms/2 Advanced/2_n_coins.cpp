#include <bits/stdc++.h>
using namespace std;


// for truly greedy approach apply linear search from the end

// binary search + greedy
int getFloor(vector<int> &arr, int k)
{
    int n = arr.size();
    int left = 0, right = n - 1, answer = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= k)
        {
            if (mid == n - 1 || arr[mid + 1] > k)
                return arr[mid];
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return -1;
}

int nCoins(int n, vector<int> &coins)
{
    // sort(coins.begin(), coins.end());
    int ctr = 0;
    while (n)
    {
        ctr++;
        n -=  getFloor(coins, n);
    }
    return ctr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000}; // here for every i coins[i]+ coins[i+1]<coins[i+2] therefore greedy works or else we need to use dp as in dp folder
    int n;
    cin >> n;
    cout << nCoins(n, coins) << endl;
    return 0;
}