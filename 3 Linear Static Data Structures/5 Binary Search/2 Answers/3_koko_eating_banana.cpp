// https://leetcode.com/problems/koko-eating-bananas/

#include <bits/stdc++.h>
using namespace std;

long hoursTaken(vector<int> &piles, int eat_per_hour)
{
    long h_taken = 0;
    for (auto &x : piles)
    {
        h_taken += ceil(1.0 * x / eat_per_hour);
    }
    return h_taken;
}
// brute force
int minEatingSpeed(vector<int> &piles, int h)
{
    for (int eat_per_hour = 1;; eat_per_hour++)
    {
        int h_taken = hoursTaken(piles, eat_per_hour);
        if (h_taken <= h)
        {
            return eat_per_hour;
        }
    }
}

// optimal

int minEatingSpeed(vector<int> &piles, int h)
{
    int maxEle = *max_element(piles.begin(), piles.end());
    int ans = -1;
    for (int j = 1, r = maxEle; j <= r;)
    {
        int mid = j + (r - j) / 2;
        long h_taken = hoursTaken(piles, mid); 
        if (h_taken <= h)
        {
            ans = mid;
            r = mid - 1;  // note that hoursTaken is inversely proportional to mid hence to increase h_taken, we should reduce mid
        }
        else
        {
            j = mid + 1;
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