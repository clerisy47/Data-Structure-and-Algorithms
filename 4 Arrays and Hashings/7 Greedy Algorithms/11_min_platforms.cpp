#include<bits/stdc++.h>
using namespace std;

    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr, arr+n);
        sort(dep, dep+n);  // it doesn't matter if we distort the order of equivalent arriving and departure time as we're calculating maximum number of platforms occupied at a times
        int currPlatform = 1, maxPlatform=1; // platfrom occupied
        for(int i=1, j=0;i<=n-1; i, j){
            // new train which needs new platform
            if(arr[i]<=dep[j]){  // train can't go when another train has departed right at their starting time so = as well
                currPlatform++;
                i++;
            }
            // new train doesn't need new platform as it's arrival is earlier than previous train's departure
            else{
                currPlatform--;
                j++;
            }
            if(currPlatform>maxPlatform) maxPlatform=currPlatform;
        }
        return maxPlatform;
    }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}