#include<bits/stdc++.h>
using namespace std;

// Brute Force If number of positives and negatives are equal
// Optimal Solution if they are not
vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    vector<int> pos, neg;
    for(int i=0; i<=n-1;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else if(a[i]<0){
            neg.push_back(a[i]);

        }
    }
    // If it contains only positive
    for(int i=0; i<=(n-1)/2;i++){
        a[2*i] = pos[i];
        a[2*i+1] = neg[i]; 
    }
    // If it contains both
    // int n_p = pos.size(), n_n = neg.size();
    // if(n_p>n_n){
    //     for(int i=0; i<=n_n-1;i++){
    //         a[2*i] = pos[i];
    //         a[2*i+1] = neg[i]; 
    //     }
    //     for(int i=2*n_n; i<=n_p;i++){
    //         a[i] = pos[i];
    //     }

    // }
    // if(n_n>n_p){
    //     for(int i=0; i<=n_p-1;i++){
    //         a[2*i] = neg[i];
    //         a[2*i+1] = pos[i]; 
    //     }
    //     for(int i=2*n_p; i<=n_n;i++){
    //         a[i] = neg[i];
    //     }

    // }
    return a;  
}
// TC: O(2n) (for both cases)

// Optimal
vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    vector<int> results(a);
    int j=0, k=1;
    for(int i=0; i<=n-1;i++){
        if(a[i]>0){
            results[j]=a[i];
            j+=2;
        }
        else if(a[i]<0){
            results[k]=a[i];
            k+=2;
        }
    }
    return results;
}
// TC: O(n)


int main(){
    
    return 0;
}