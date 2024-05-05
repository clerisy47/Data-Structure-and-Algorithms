#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b){
    int r1 = a.size();
    int c1 = a[0].size();
    int r2 = b.size();
    int c2 = b[0].size();
    if (c1!=r2) return {{}};
    vector<vector<int>> product;
    for(int i=0; i<=r1-1;i++){
        product.push_back({});   // delcaring size at first will cause matrix to have o(n) complexity more
        for(int j=0; j<=c2-1;j++){
                product[i].push_back(0);
            for(int k=0; k<=r2-1; k++){
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return product;
}

vector<vector<int>> identity(int n){
    vector<vector<int>> identity_matrix;
    for(int i=0; i<=n-1; i++){
        identity_matrix.push_back({});
        for(int j=0; j<=n-1; j++){
            if(i==j){
                identity_matrix[i].push_back(1);
            }
            else{
                identity_matrix[i].push_back(0);
            }
        }
    }
    return identity_matrix;
}

// Brute Force: Multiply it n times
// Time Complexity: O(n^3 m )

// Optimized
vector<vector<int>> power(vector<vector<int>> &a, int n){
    vector<vector<int>> ans= identity(a.size());
    while(n){
        if(n&1){
           ans = multiply(ans, a);
        }
        a = multiply(a, a);
        n>>=1;
    }
    return ans;
}
// Time Complexity: O(n^3 log num)

int main(){
    
    return 0;
}