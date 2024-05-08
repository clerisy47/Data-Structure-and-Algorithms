#include<bits/stdc++.h>
using namespace std;

// Brute Force
int majorityElement(vector<int> v) {
    int n= v.size();
    int majority= n/2;
    for(int i=0; i<=n-1;i++){
        int count=0;
        for(int j=0; j<=n-1; j++){
            if(v[i]==v[j]){
                count++;
                if(count>majority){
                    return v[i];
                }
            }
        }
    }
    return -1;
}

// Hashing
int majorityElement(vector<int> v) {
    unordered_map<int,int> counter;
    int majority=v.size()/2;
    for(int x:v){
        counter[x]++;
        if(counter[x]>majority) return x;      
    }
    return -1;
}

// Moore's voting algorithm
int majorityElement(vector<int> v) {
    int maj_element = v[0];
    int count = 1;
    int n = v.size();
    for(int i=1; i<=n-1;i++){
        if(count==0) maj_element = v[i];
        if(v[i]==maj_element) count++;
        else count--;
    }
    return maj_element; // if it states array may not have a majority element, we need to verify it with a separate for loop
}

int main(){
    
    return 0;
}