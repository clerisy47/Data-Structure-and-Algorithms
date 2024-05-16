#include<bits/stdc++.h>
using namespace std;

int main(){

    // Pair initialization and printing
    pair<int, string> p;
    //p = make_pair(2, "pair");
    //p = {2, "pair"};
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;

    // Deep copy
    cout<<"Deepcopy"<<" ";
    pair<int, string> p_deep_copy = p;
    p_deep_copy.first = 1;
    cout<<p.first<<" "<<p.second<<endl;

    // Shallow copy
    cout<<"Pass by reference"<<" ";
    pair<int, string> &p_shallow_copy = p;
    p_shallow_copy.first = 1;
    cout<<p.first<<" "<<p.second<<endl;

 // for any containers .size() is O(1)
}