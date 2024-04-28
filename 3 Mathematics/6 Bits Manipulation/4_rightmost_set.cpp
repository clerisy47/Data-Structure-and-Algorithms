// making new number with rightmost set bit on the same position, rest being 0 eg 10100: 100

#include<bits/stdc++.h>
using namespace std;

int rightmostSetBit(int n){
    return n&(n-1)^n;
}

int main(){
    
    return 0;
}