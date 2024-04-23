// Every number appearing twice except two numbers
// Every number appearing even except two numbers


#include<bits/stdc++.h>
using namespace std;

// Brute Force, Hashing method and pointer method in array folder

vector<int> getSingleElement(vector<int> &arr){
	int xor_ones=0, n=arr.size();	
    for(int i=0; i<=n-1;i++){
        xor_ones^=arr[i];
    }
	int rightmost_set_bit = xor_ones&(xor_ones-1)^xor_ones;
    int bucket_1=0, bucket_2=0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]&rightmost_set_bit) bucket_1^=arr[i]; // checks if the rightmost_set_bit's set position is set in the arr[i] as well
        else bucket_2^=arr[i]; // two unique number will always end up in different bucket as xor_ones is their xor and its rightmost_set_bit's set position is set will be set in one of them only
    }
    return {bucket_1, bucket_2};
}

int main(){
    
    return 0;
}