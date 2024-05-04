#include <bits/stdc++.h>
using namespace std;


// Brute force: Running loop from 1 to n to check if there is nth root

// Optimal
long long pow(int x, int y, int limit)
{ // power function which doesn't let ans cross the limit
    long long ans = 1;
    for (int i = 0; i <= y - 1; i++)
    {
        ans *= x;
        if (ans > limit ||ans > INT_MAX / x)
        {
            return limit + 1;
        }
    }
    return ans;

}

int NthRoot(int n, int num)
{
    int left = 1, right = num;
    int ans = num;
    while (left <= right)
    {
        int mid = left + ((right - left)>>1); // optimized using bit operator
        if (pow(mid, n, num) <= num)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    cout<<NthRoot(2, 8);

    return 0;
}