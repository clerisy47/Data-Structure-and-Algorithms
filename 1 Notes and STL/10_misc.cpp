#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){ 
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v = {4, 6, 8, 25, 7, 4};
    int min = *min_element(v.begin(), v.end()); // it returns reference to the min element
    int max = *max_element(v.begin(), v.end()); // ie for an array reference, for a vector iterator but both can be dereferenced with *
    int sum = accumulate(v.begin(), v.end(), 0); // 0 is initial sum doesn't return pointer
    int ct = count(v.begin(), v.end(), 4);
    cout<<min<<" "<<max<<" "<<sum<<" "<<ct<<endl;

    reverse(v.begin(), v.end());
    printVec(v);
    cout<< all_of(v.begin(), v.end(),[](int x){ return x>5;})<<" "; // returns 0(false)
    cout<< any_of(v.begin(), v.end(),[](int x){ return x>5;})<<" "; // returns 1(true)
    cout<< none_of(v.begin(), v.end(),[](int x){ return x>5;})<<endl; // returns 0(false)


    cout<< __builtin_popcount(5)<<endl; // number of set bits in the number
    cout<< __builtin_popcountll(1ll)<<endl;

    cout<<__gcd(5, 6);
}