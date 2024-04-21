#include<bits/stdc++.h>
using namespace std;

// Brute Force
int findXOR(int L, int R){
    int XOR=0;
    for(int i=L; i<=R; i++){
        XOR ^= i; 
    }
    return XOR;
}

// Optimal
int xor_one_to_n(int n){
    int rem = n%4;
    if(rem==1) return 1;
    if(rem==2) return n+1;
    if(rem==3) return 0;
    if(rem==0) return n;
}
int findXOR(int L, int R){
    return xor_one_to_n(L-1)^xor_one_to_n(R);
}

int main(){
    
    return 0;
}