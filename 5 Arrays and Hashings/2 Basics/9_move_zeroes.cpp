// move zeroes to the end

#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros_brute(int n, vector<int> a) {
    vector<int> results(n);
    int j=0;
    for(int i=0; i<=n-1;i++){
            if(a[i]!=0){
                results[j]=a[i];
                j++;
            }
    }
    return results;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> moveZeros_optimal(int n, vector<int> a) {
    int j=0;
    for(int i=0; i<=n-1;i++){
            if(a[i]!=0){
                a[j]=a[i];
                if(i!=j) a[i]=0;
                j++;
            }
    }
    return a;
}

// Time Complexity: O(n)
// Space Complexity: O(1)

vector<int> moveZeros_optimal(int n, vector<int> a) {
    int j=-1;
    // Finding first zero
    for(int i=0; i<=n-1;i++){
         if(a[i]==0){
             j=i;
             break;
         }
    }
    if( j==-1) return a;
    for(int i=j+1;i<=n-1;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
         }
    }
    return a;
}
// Time Complexity: O(n)
// Space Complexity: O(1)