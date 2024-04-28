#include<bits/stdc++.h>
using namespace std;

// Brute Force (Optimial for non Square Matrix)
vector<vector<int>> transpose(vector<vector<int>> &a){
    int r1 = a.size();
    int c1 = a[0].size();
    vector<vector<int>> transposed(c1, vector<int>(r1));
    for(int i=0; i<=c1-1;i++){
        for(int j=0; j<=r1-1;j++){
                transposed[i][j]=a[j][i];
            }
        }
    return transposed;
}
// TC: O(n*m)
// SC: O(n*m)

// Optimial (For Square Matrix)
vector<vector<int>> transpose(vector<vector<int>> &a){
    int r1 = a.size();
    int c1 = a[0].size();
    for(int i=0; i<=c1-1;i++){
        for(int j=i+1; j<=r1-1;j++){ // Upper diagonal elements
                swap(a[i][j], a[j][i]); 
            }
        }
    return a;
}
// TC: O(n^2-n/2)
// SC: O(1)

int main(){
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<vector<int>> transposed = transpose(a);

    cout << "Matrix transposed:" << endl;
    for (int i = 0; i < transposed.size(); i++) {
        for (int j = 0; j < transposed[0].size(); j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}