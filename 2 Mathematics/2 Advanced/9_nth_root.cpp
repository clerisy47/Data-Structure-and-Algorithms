// https://www.geeksforgeeks.org/problems/square-root/0
// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

#include <bits/stdc++.h>
using namespace std;


// Brute force: Running loop from 1 to n to check if there is nth root

// Optimal
int pow(int x, int y, int limit)
{ // power function which doesn't let ans cross the limit
    int ans = 1;
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
    int i = 1, j = num;
    int ans = num;
    while (i <= j)
    {
        int mid = i + ((j - i)>>1); // optimized using bit operator
        if (pow(mid, n, num) <= num)
        {
            ans = mid;
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return ans;
}

int main()
{
    cout<<NthRoot(2, 8);

    return 0;
}