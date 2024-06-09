#include<bits/stdc++.h>
using namespace std;

// sum of diagonal elements
int  sum_diagonals(vector<vector<int>> &a){
    int r1 = a.size();
    int c1 = a[0].size();
    if (r1!=c1) return 0;
    int sum=0;
    for(int i=0; i<=r1-1;i++){
        for(int j=0; j<=c1-1;j++){
            if(i==j||i+j==r1-1)sum+=a[i][j];
        }
    }
    return sum;
}

int main(){
    vector<vector<int>> a = {{1, 2, 5}, {3, 4, 7}, {5, 9, 13}};
    cout<< sum_diagonals(a);
    return 0;
}