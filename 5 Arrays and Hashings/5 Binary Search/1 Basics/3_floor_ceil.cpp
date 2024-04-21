#include<bits/stdc++.h>
using namespace std;

// brute force: linear search

// optimal:
pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int k) {
	int left=0, right=n-1, answer_f=-1, answer_c=-1; 
    // ceil
    while(left<=right){                     // ceil is basically element in lower bound
        int mid = left + (right-left)/2;   
        if(arr[mid]>=k){
            answer_c=arr[mid];
			right = mid-1;
        }
        else left = mid+1;
    }
    // floor
	left=0, right=n-1;
	while(left<=right){
        int mid = left + (right-left)/2; 
        if(arr[mid]<=k){               
            answer_f=arr[mid];
			 left = mid+1;
        }
        else right = mid-1;

    }
    return {answer_f, answer_c};
}
int main(){
    
    return 0;
}