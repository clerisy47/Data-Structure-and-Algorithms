#include<bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal:

int eleLowerBound(vector<int> arr, int n, int k) {
    int left=0, right=n-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]>=k){
            if(mid==0||arr[mid-1]<k) return arr[mid];
			right = mid-1;
        }
        else left = mid+1;
    }
    return -1;  // if all elements are smaller than target it returns -1
}

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int k) {
	int left=0, right=n-1, answer=-1; 
	while(left<=right){
        int mid = left + (right-left)/2; 
        if(arr[mid]<=k){    
            if(mid==n-1||arr[mid+1]>k) return {arr[mid], eleLowerBound(arr, n, k)};      
			 left = mid+1;
        }
        else right = mid-1;
    }
    return {-1, eleLowerBound(arr, n, k)}; // ceil is basically element in lower bound
}

int main(){
    
    return 0;
}