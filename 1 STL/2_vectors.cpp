#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){ 
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void pass_by_value(vector<int> v){ // don't do this. its deep copy so O(n) complexity
    v.push_back(47);
}

void pass_by_reference(vector<int> &v){ // do this. its shallow copy so O(1) complexit
    v.push_back(47);
}

int main(){

    // input and printing
    vector<int> v;
    //v = {1, 2, 3, 4, 5};
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        v.push_back(x); // O(1)
    }
    printVec(v);

    reverse(v.begin(),v.end()); // For arrays, reverse(arr, arr+n);
    printVec(v);

    v.pop_back(); // O(1)
    printVec(v);

    vector<int> v_zeroes(10);
    printVec(v_zeroes);
    vector<int> v_ones(10, 1);
    printVec(v_ones);

    // Copying of vectors are shallow copy by default
    vector<int> v_copy = v;
    v.push_back(7);
    printVec(v_copy);

    // Pass by value
    pass_by_value(v);
    printVec(v);

    // Pass by reference
    pass_by_reference(v);
    printVec(v);
    


}