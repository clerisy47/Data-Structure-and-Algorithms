#include <bits/stdc++.h>
using namespace std;

// Brute Force
int greatest_integer_brute(vector<int> arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}
// Time Complexity: O(nlogn)
// Space Complexity: O(1)


int greatest_integer(vector<int> arr){
    int greatest = arr[0];
    for(int i=1; i<= arr.size()-1; i++){
        if(arr[i]>greatest){
            greatest = arr[i];
        }
    }
    return greatest;
}
// Time Complexity: O(n)
// Space Complexity: O(1)



int main() {
    vector<int> n = {1, 2, 47, 3, 4, 7 , 2};
    cout<<greatest_integer(n);
    return 0;
}



