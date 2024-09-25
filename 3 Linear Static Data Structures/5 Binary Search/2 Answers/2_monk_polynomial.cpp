// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/

// ax2+bx+c>=k smallest k
// Similarly can do for ax3+bx2+cx+d>=k

#include <bits/stdc++.h>
using namespace std;

// Binary Search
int fun(int a, int b, int c, int x)
{
    return a * x * x + b * x + c;
}

int poly(int a, int b, int c, int k){
    int i = 1, j = ceil(sqrt(k));
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (fun(a, b, c, mid) >= k)
        {
            if(fun(a, b, c, mid-1) < k) return mid;
            else{
                j=mid-1; // going i
            }
            
        }
        else{
            i = mid+1;
        }
    }
    return 0;
}

int main()
{
    cout<<poly(3, 4, 5, 5);

    return 0;
}