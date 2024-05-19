// https://leetcode.com/problems/max-consecutive-ones/

#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int>& arr){
    int max_ones=0,curr_ones = 0;
    for(int i=0;i<=arr.size()-1;i++){
        if(arr[i]){
            curr_ones+=1;
        }
        else{
            curr_ones=0;
        }
        if(max_ones<curr_ones) max_ones = curr_ones;
    }
    return max_ones;
}

int main(){
    
    return 0;
}