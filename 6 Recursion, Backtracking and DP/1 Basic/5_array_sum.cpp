#include<bits/stdc++.h>
using namespace std;

int arr_sum(int arr[], int n){
    if(n<0) return 0;
    return arr[n-1]+ arr_sum(arr, n-1);

}
// TC: n
// SC: n

int main(){
    int n=5;
    int arr[5] = {1, 2, 3, 4, 6};
    cout<<arr_sum(arr, n);
    return 0;
}