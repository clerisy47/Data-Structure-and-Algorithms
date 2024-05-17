// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

#include <bits/stdc++.h>
using namespace std;

int minCost(int arr[], int n)
{
    multiset<int> ms(arr, arr + n); // can't do in the given array itself by sorting as the new rope may not be the smallest hence need to be inserted in it splace
    int totalSum = 0;
    while (ms.size()>1) // if there is 1 ropes left then it is the final rope
    {
        int top1 = *ms.begin();
        int top2 = *(++ms.begin());
        int currSum = top1 + top2;
        totalSum += currSum;
        ms.erase(ms.begin());
        ms.erase(ms.begin());
        ms.insert(currSum);
    }
    return totalSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}