#include<bits/stdc++.h>
using namespace std;

// Optimal Solution
vector<int> superiorElements(vector<int>&a) {
    int n = a.size(), max_elem = INT_MIN;
    vector<int> output;
    for(int i=n-1; i>=0; i--){
        if(a[i]>max_elem){
            output.push_back(a[i]);
            max_elem=a[i];
        }
    }
    return output;
}

// TC: O(N)

int main(){
    
    return 0;
}