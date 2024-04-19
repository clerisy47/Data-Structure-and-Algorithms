#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b){
    int r1 = a.size();
    int c1 = a[0].size();
    int r2 = b.size();
    int c2 = b[0].size();
    if (c1!=r2) return {{}};
    vector<vector<int>> product(r1, vector<int>(c2,0));
    for(int i=0; i<=r1-1;i++){
        for(int j=0; j<=c2-1;j++){
            for(int k=0; k<=r2-1; k++){
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return product;
}

int main(){
    vector<vector<int>> a = {{1, 2}, {3, 4}};
    vector<vector<int>> b = {{1, 0}, {2, 1}};

    vector<vector<int>> product = multiply(a, b);

    cout << "Matrix product:" << endl;
    for (int i = 0; i < product.size(); i++) {
        for (int j = 0; j < product[0].size(); j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}