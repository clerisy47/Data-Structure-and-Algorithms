// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, multiset<string>> mp; // in case two person have same name and same marks multiset is used
    int n, inp_num;
    string inp_str;
    cin>>n;
    while(n--){
        cin>>inp_str;
        cin>>inp_num;
        mp[-inp_num].insert(inp_str); // including negative of input so that it can be printed in descending other easily late
    }
    for(auto &x: mp){ // using & to avoid being created copy of pairs
        for(auto &y: x.second ){
            cout<<y<<" ";
            cout<< - x.first<<endl;
        }
    }
    return 0;
}