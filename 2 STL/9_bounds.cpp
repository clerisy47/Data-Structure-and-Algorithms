#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){ 
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v = {4, 6, 8, 25, 7};

    // lower_bound always returns the number if present or number just larger to it
    // upper_bound always returns the number just greater
    // for sorted array O(logn) for unsorted array O(n)

    auto bound = lower_bound(v.begin(), v.end(), 6);
    cout<< *bound<<endl; // 6

    bound = upper_bound(v.begin(), v.end(), 6);
    cout<< *bound<<endl; // 8

    bound = upper_bound(v.begin(), v.end(), 26);
    cout<< (bound==v.end())<<endl; // 1 ie not found nor greater element

    // For sets and maps, use s.lower_bound() instead of lower_bound() as it is optimized to log(n)
    set<int> s = {4, 6, 8, 25, 7};
    auto bound_set = s.lower_bound(6);
    cout<< *bound_set<<endl; // 6



}