#include <bits/stdc++.h>
using namespace std;

long long minCost(long long arr[], long long n)
{
    multiset<long long> ms(arr, arr + n); // can't do in the given array itself by sorting as the new rope may not be the smallest hence need to be inserted in it splace
    long long totalSum = 0;
    while (ms.size()>1) // if there is 1 ropes left then it is the final rope
    {
        long long top1 = *ms.begin();
        long long top2 = *(++ms.begin());
        long long currSum = top1 + top2;
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