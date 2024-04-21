// Every number appearing twice except one number
// Every number appearing even times except one number

#include<bits/stdc++.h>
using namespace std;

// Brute Force, Hashing method and pointer method in array folder

int getSingleElement(vector<int> &arr){
	int xor_ones=0, n=arr.size();	
    for(int i=0; i<=n-1;i++){
        xor_ones^=arr[i];
    }
	return xor_ones;   
}

int main(){
    
    return 0;
}