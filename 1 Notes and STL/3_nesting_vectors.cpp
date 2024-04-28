#include<bits/stdc++.h>
using namespace std;

void printVecPairs(vector<pair<int,int>> &v){ 
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}


int main(){

    vector<pair<int,int>> v = {{1, 2}, {2,3}, {4,5}};
    printVecPairs(v);

    v.push_back({47, 49});
    printVecPairs(v);

    // similarly we can nest vectors and arrays in vectors as well 
}