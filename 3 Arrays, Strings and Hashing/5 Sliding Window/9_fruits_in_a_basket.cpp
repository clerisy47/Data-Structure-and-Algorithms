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

    for (int i = 0, j = 0; j <= n - 1; j++)
    {
        baskets[fruits[j]]++;
        if (baskets.size() > 2) // while is replaced by if as we're only looking for the longest
        {
            baskets[fruits[i]]--;
            i++;
            if (baskets[fruits[i]] == 0)
            {
                baskets.erase(fruits[i]);
            }
        }
        else
        {
            maxWindow = max(maxWindow, j - i + 1);
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