#include<bits/stdc++.h>
using namespace std;

// Brute Force
// Find all possible permutations by recursion, do a linear search and find the given array
// The array next to the given array will be the answer if it doesn't exist, the first array will be the answer
// TC: O(n!*n)

// Optimal Solution
vector<int> nextGreaterPermutation(vector<int> &A) {
    int n= A.size();
    int i;
    for(i=n-2; i>=0; i--){
        if(A[i+1]>A[i]){      // Each permutations lead ascending sorted array to descending sorted array
            break;
        }
    }
    if(i==-1)reverse(A.begin(), A.end());
    else{
        for(int j=n-1;j>=i;j--){
            if(A[j]>A[i]){
                swap(A[j], A[i]);
                break;
            }
        }
        reverse(A.begin()+i+1, A.end());
    }
    return A;
}


// TC: O(3N)

int main(){
    
    return 0;
}