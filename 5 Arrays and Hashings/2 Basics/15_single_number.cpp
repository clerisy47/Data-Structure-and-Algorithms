// Single number 2 and 3 in bit manipulation folder

#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach (Can be applied for single number 2 and 3 as well)
int getSingleElement(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<=n-1;i++){
        int count = 0;
        for(int j=0; j<=n-1;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count==1) return arr[i];
    }     
}

//Array Hashing (Can be applied for single number 2 and 3 as well)
int getSingleElement(vector<int> &arr){
    int max=arr[0];
    int n = arr.size();
    for(int i=1;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    vector<int> count(max);	
    for(int i=0; i<=n-1;i++){
        count[arr[i]-1]++;
    }
    for(int i=0; i<=max-1;i++){
        if(count[i]==1){
            return i+1;
        }
    }     
}

// Hashmap Hashing (Can be applied for single number 2 and 3 as well)
int getSingleElement(vector<int> &arr){
    int max = arr[0];
    int n = arr.size();

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    unordered_map<int, int> count;
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }

    // Iterate through the map to find the single element
    for(int i = 1; i <= max; i++){
        if(count[i] == 1){
            return i;
        }
    }
}

// Better (Can be applied for single number 2 and 3 as well)
int getSingleElement(vector<int> &arr){
    sort(arr.begin(), arr.end());
	int i;	
    for(i=0; i<=arr.size()-2;i+=2){
        if(arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
	return arr[i];   
}

// Bit Manipulation (Optimal approach) (Bit manipulation of single number 2 and single number 3 in bit manipulation folder)
int getSingleElement(vector<int> &arr){
	int xor_ones=0;	
    for(int i=0; i<=arr.size()-1;i++){
        xor_ones^=arr[i];
    }
	return xor_ones;   
}



int main(){
    
    return 0;
}