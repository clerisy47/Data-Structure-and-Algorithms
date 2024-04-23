#include<bits/stdc++.h>
using namespace std;

// Brute force: Convert into binary and do manipulation

// Optimal solution
vector<int> bitManipulation(int num, int k){
    int i = k-1; // Getting index. If question has 0 indexing then no need
    bool get = num&(1<<i);
    // bool get = 1&(num>>i); using right shift
    int set = num|(1<<i);
    int clear = num&~(1<<i);
    int toggle = num^(1<<i);
    return {get, set, clear, toggle};  // bool and int gets typecasted by itself. bool becomes 1 if non zero
}

int main(){
    
    return 0;
}