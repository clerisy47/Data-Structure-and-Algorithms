#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> m;
    m["lol"]="poop"; // insertion in O(logn) for integers O(s*logn(n)) for strings, s = size of string
    m["abc"]="uts";
    m.insert({"cde","ava"});
    for(auto &x: m){
        cout<< x.first<< " "<<x.second<<endl; // printed in sorted way // acess in O(logn) for each elements ie nlog(n)
    } 

    m.erase("cde"); // O(logn)
    for(auto &x: m){
        cout<< x.first<< " "<<x.second<<endl; // printed in sorted way // acess in O(logn) for each elements ie nlog(n)
    } 
    cout<<endl<<endl;

    // In unordered map, hashing is done In ordered map but red black trees (self balancing trees) is used for implementation
    // insertion and acessing time complexity in O(1) on average (worst case during collision O(n))
    // Only int, long, double, float, char, string can only be hashed and hence used in unordered map
    // In maps we can use it as we can compare then s1>s2 and so on.

    unordered_map<int, string> um;
    um[5]="poop";
    um[6]="uts";
    um.insert({2,"ava"});
    for(auto &x: um){
        cout<< x.first<< " "<<x.second<<endl; // printed in random way
    } 
    cout<<endl;

    // Not used much but can be used multiple values in single key
    // Using vectors inside map is prefered
    // Insertion and acess is O(logn)
    // It will sort like regular maps as it is implemented in similar way

    multimap<int, string> um;


}