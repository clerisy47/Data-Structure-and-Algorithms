// https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1

#include <bits/stdc++.h>
using namespace std;

int totalFruits(int n, vector<int> &fruits)
{
    int maxWindow = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        unordered_set<int> baskets;
        for (int j = i; j <= n - 1; j++)
        {
            baskets.insert(fruits[j]);
            if (baskets.size() > 2)
            {
                break;
            }

            maxWindow = max(maxWindow, j - i + 1);
        }
    }
    return maxWindow;
}

// TC: O(n^2)
// SC: O(1)

int totalFruits(int n, vector<int> &fruits)
{
    int maxWindow = 0;
    unordered_map<int, int> baskets; // can't use set here since when we erase one element everything gets erased

    for (int l = 0, r = 0; r <= n - 1; r++)
    {
        baskets[fruits[r]]++;
        if (baskets.size() > 2) // while is replaced by if as we're only looking for the longest
        {
            baskets[fruits[l]]--;
            l++;
            if (baskets[fruits[l]] == 0)
            {
                baskets.erase(fruits[l]);
            }
        }
        else
        {
            maxWindow = max(maxWindow, r - l + 1);
        }
    }
    return maxWindow;
}
// TC: O(n) (Using while loop is O(2n))
// SC: O(1)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}