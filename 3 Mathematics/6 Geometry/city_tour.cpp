// In 2d grid moving only up left down and right, find number of possible final position starting from origin
// Distance from origin should always increase

// After N steps, as distance will always increase, it will always end up moving 1 units
// For n steps, it will move n units (N,0), (N-1,1), (N-2, 2).....(1, N-1) [(0, N) will be counted for 4th quadrant]
// ie n possible final places
// For all four quadrants, it will be 4*n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin>>n;
        cout<< 4*n<<endl;
    }
    return 0;
}