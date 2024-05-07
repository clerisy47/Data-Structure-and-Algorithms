#include<bits/stdc++.h>
using namespace std;

// Greedy Algorithm
bool isBalanced(string s){
    stack<char> st;

    for(char c: s){
        if(c=='['||c=='('||c=='{'){
            st.push(c);
        }
        else {
            if(st.empty()) return false; 
            if(c==']' && st.top()=='[')
                st.pop();
            else if(c==')' && st.top()=='(')
                st.pop();
            else if(c=='}' && st.top()=='{')
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}

int main(){
    
    return 0;
}