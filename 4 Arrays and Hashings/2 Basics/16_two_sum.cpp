#include<bits/stdc++.h>
using namespace std;

//brute force
bool two_sum(int n, vector<int> arr, int target)
{
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]+arr[j]==target) return true;
        }
    }
    return false;
}

//hashing (optimal for unsorted arrays)
bool two_sum(int n, vector<int> arr, int target)
{
    unordered_set<int> s;
    for(int i=0;i<=n-1;i++){
        if(s.find(arr[i])!=s.end()) return true;
        s.insert(target-arr[i]);
    }
    return false;
}

int main(){
    
    return 0;
}

//two pointer(optimal for sorted arrays)
bool two_sum(int n, vector<int> arr, int target)
{
    int l=0, r=n-1;
    while(l<r){ // not l<=r like other two pointer approaches
        if(arr[l]+arr[r]==target) return true;
        if(arr[l]+arr[r]<target) l++;
        if(arr[l]+arr[r]>target) r--;
    }
    return false;
}