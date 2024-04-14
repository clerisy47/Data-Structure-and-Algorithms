#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout<< s.top() <<endl; // last in first out
        s.pop();
    } 
    // all methods above are O(1)
    cout<<endl; 

    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
        cout<< q.front() <<endl; // first in first out
        q.pop();
    }
    // all methods above are O(1)
}