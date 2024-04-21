// search: smallest index such that arr[i]==k (target)
// lower_bound: smallest index such that arr[i]>=k (target)
// lower_bound is also called search insertion position
// upper_bound: smallest index such that arr[i]>k (target)
// if all elements are smaller than target it returns length of array ie hypothetical index (n)
// if multiple elements are present then it returns first index
// for sorted array O(logn) for unsorted array O(n)



#include<bits/stdc++.h>
using namespace std;


// Brute force: 2 pointer linear search

// Binary Search
int lowerBound(vector<int> arr, int n, int k) {
    int left=0, right=n-1, answer=n; // if all elements are smaller than target it returns length of array ie hypothetical index (n)
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]>=k){
            answer=mid;
			right = mid-1;
        }
        else left = mid+1;
    }
    return answer; 
}

int upperBound(vector<int> &arr, int k, int n){
    int left=0, right=n-1, answer=n; // if all elements are smaller than target it returns length of array ie hypothetical index (n)
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]>k){ // just modify this
            answer=mid;
			right = mid-1;
        }
        else left = mid+1;
    }
    return answer; 	
}

int main(){
    
    return 0;
}