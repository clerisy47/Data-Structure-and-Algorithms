#include<bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> plusOne(vector<int>& arr) {
    int n = arr.size(), carry=0;
    reverse(arr.begin(), arr.end());
    arr[0]++;
    for(int i=0; i<=n-1;i++){
        arr[i]+=carry;
        if(arr[i]==10){
            arr[i]=0;
            carry=1;
        }
        else{
            carry=0;
        }
    }
    if(carry==1){
        arr.push_back(1);
    }
    reverse(arr.begin(), arr.end());
    return arr;
}
// TC: O(n/2 + n + n/2)= O(2n)

// Optimal
vector<int> plusOne(vector<int>& arr) {
    int n = arr.size(), carry=0;
    arr[n-1]++;
    for(int i=n-1; i>=0;i--){
        arr[i]+=carry;
        if(arr[i]==10 && i!=0){
            arr[i]=0;
            carry=1;
        }
        else if(arr[i]!=10){
            carry=0;
        }
        else{
            arr[0]=1;
            arr.push_back(0);    // Only one case where we need extra space in array is 999 + 1 = 1000
        }
    }
    return arr;
}
// TC: O(n)


int main(){
    
    return 0;
}