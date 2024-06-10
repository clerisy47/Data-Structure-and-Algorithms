#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>::iterator it_begin = v.begin(); // points to first element of container
    cout<<*it_begin<<endl;
    cout<<*(it_begin+1)<<endl;

    auto it_end = v.end(); // points to element after last of container
    cout<<*(it_end-1)<<endl; 

    vector<int>:: iterator it;
    for(it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    vector<pair<int, int>> v_p = {{1,2},{3,4},{5,6}};
    for(auto it = v_p.begin(); it!=v_p.end();it++){
        cout<<it->first<<" "<<it->second<<endl;  // (*anything).anything is equivalent to anything->anything
    }

    // cannot change elements in vector
    for(int x: v){ 
        x++;
    }

    for(int &x: v){ 
        cout<<x<<" ";
    }


    // can change elements in vector
    for(int &x: v){ 
        x++;
    }

    for(int &x: v){ 
        cout<<x<<" ";
    }

    cout<<endl;

    for(pair x: v_p){ // bad
        cout<<x.first<<" "<<x.second<<endl;
    }

    for(auto &x: v_p){ // Better because of reference
        cout<<x.first<<" "<<x.second<<endl;
    }

}