// https://leetcode.com/problems/minimum-number-of-days-to-make-mid-bouquets/description/

#include <bits/stdc++.h>
using namespace std;

int nBouquets(vector<int> &bloomDay, int k, int day)
{
    int ctr = 0, n = bloomDay.size();
    for (int i = 0, j = 0; j <= n - 1; j++)
    {
        if (bloomDay[j] > day)
        {
            i = j + 1;
        }
        if (j - i + 1 == k)
        {
            ctr++;
            i = j + 1;
        }
    }
    return ctr;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    int minele = *min_element(bloomDay.begin(), bloomDay.end());
    int maxele = *max_element(bloomDay.begin(), bloomDay.end());
    int n = bloomDay.size(), ans = -1;
    for (int i = 0, j = n; i <= j;)
    {
        int mid = i + (j - i) / 2;
        int number_of_bouquets = nBouquets(bloomDay, k, mid);
        if (number_of_bouquets >= m)
        {
            ans = mid;
            j = mid - 1;
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