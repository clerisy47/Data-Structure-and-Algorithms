#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>& arr, int left, int right) {
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

// TC: O(n/2)
// SC: O(1)

