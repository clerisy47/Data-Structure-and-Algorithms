// https://codeforces.com/problemset/problem/1365/C
// maximum matching that can be made with 0 cost ie with only performing rotations

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y,  max=1, ele, arr_position[10000],  arr_frequency[10000];
    cin>>n;
    for(int i=1;i<=n;i++){  // 1 based indexing since numbers are from 1 to n
        cin>>x;
        arr_position[x]=i;
    }
    for(int i=1;i<=n;i++){
        cin>>ele;
        arr_frequency[(arr_position[ele]-i+n)%n]++;
    }
    for(int x:arr_frequency){
        if(x>max) max=x;
    }
    cout<<max;
    return 0;
}