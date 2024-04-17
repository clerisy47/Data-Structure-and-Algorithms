#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
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

//Array Hashing
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

// Hashmap Hashing
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

//XOR
int getSingleElement(vector<int> &arr){
	int xor1=0;	
    for(int i=0; i<=arr.size()-1;i++){
        xor1^=arr[i];
    }
	return xor1;   
}

//Optmial Approach
int getSingleElement(vector<int> &arr){
	int i;	
    for(i=0; i<=arr.size()-2;i+=2){
        if(arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
	return arr[i];   
}

int main(){
    
    return 0;
}