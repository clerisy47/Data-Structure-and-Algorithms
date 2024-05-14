// ax2+bx+c>=k smallest k
// Similarly can do for ax3+bx2+cx+d>=k

#include <bits/stdc++.h>
using namespace std;

int fun(int a, int b, int c, int x)
{
    return a * x * x + b * x + c;
}

int poly(int a, int b, int c, int k){
    int left = 1, right = ceil(sqrt(k));
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (fun(a, b, c, mid) >= k)
        {
            if(fun(a, b, c, mid-1) < k) return mid;
            else{
                right=mid-1; // going left
            }
            
        }
        else{
            left = mid+1;
        }
    }
    return 0;
}

int main()
{
    cout<<poly(3, 4, 5, 5);

    return 0;
}