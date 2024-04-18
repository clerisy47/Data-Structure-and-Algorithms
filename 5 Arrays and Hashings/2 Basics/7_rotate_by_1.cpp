// rotate left by 1

#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray_brute(vector<int>& arr, int n) {
    vector<int> output;
    for(int i=1;i<=n-1;i++){
        output.push_back(arr[i]);
    }
    output.push_back(arr[0]);
    return output;
}

vector<int> rotateArray_optimal(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i=0;i<=n-2;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    return arr;
}
