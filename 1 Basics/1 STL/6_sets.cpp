#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def"); // O(logn)
    cout<< (s.find("def")==s.end())<<" "; //1: Not Present 0: Present O(logn)

    // same difference as ordered map and unordered map
    unordered_set<string> us;
    s.insert("abc");
    s.insert("def"); // O(1)
    cout<< (s.find("poop")==s.end()); // 1: Not Present 0: Present O(1)
    cout<<endl;

    // Insertion and acess is O(logn)
    // Duplicates can be used
    // It will sort like regular sets as it is implemented in similar way ie red black trees (self balancing trees)

    multiset<string>ms;
    ms.insert("a");
    ms.insert("b");
    ms.insert("c");
    ms.insert("a");

    for(auto x:ms){
        cout<<x<<" ";
    }

}