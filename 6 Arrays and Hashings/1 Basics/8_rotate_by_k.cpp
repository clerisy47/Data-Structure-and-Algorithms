// rotate left by k

#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray_brute(vector<int>arr, int k) {
    vector<int> output;
    k %= arr.size();
    for(int i=k;i<=arr.size()-1;i++){
        output.push_back(arr[i]);
    }
    for(int i=0;i<=k-1;i++){
        output.push_back(arr[i]);
    }
    return output;
}
// Time Complexity: O(n+k')
// Space Complexity: O(n)

vector<int> rotateArray_better(vector<int>arr, int k) {
    vector<int> temp;
    k %= arr.size();

    for(int i=0;i<=k-1;i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<=arr.size()-1-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=0;i<=k-1;i++){
        arr[arr.size()-1-k+i+1]=temp[i];
    }
    return arr;
}
// Time Complexity: O(n+k')
// Space Complexity: O(k)

vector<int> rotateArray_optimal_1(vector<int>arr, int k) {
    int n = arr.size();
    vector<int> temp(n);
    for(int i =0 ; i<=n-1 ;i++){
        temp[i] = arr[(i+k)%n];
    }
    return temp;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> rotateArray_optimal_2(vector<int> arr, int k) {
    k %= arr.size();
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

// Time Complexity: O(2n)
// Space Complexity: O(1)

