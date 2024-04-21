#include<bits/stdc++.h>
using namespace std;

int clearLastSetBit(int num){
    return num&(num+1);
}
// returns power of 2 just less than given num if it is power of 2 then returns 0

int main(){
    cout<< clearLastSetBit(11);
    return 0;
}