// search an element in an array

#include<bits/stdc++.h>
using namespace std;

// Unsorted arrays
int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0;i<=n-1;i++){
        if(arr[i]==num) return i;
    }
    return -1;
}
// Time Complexity: O(n)


// Sorted arrays
int binarySearch(int n, int num, vector<int> &arr)
{
    int left=0, right=n-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==num) return mid;
        else if(arr[mid]<num) left = mid+1;
        else right = mid-1;
    }
    return -1;
}
// Time Complexity: O(logn)



