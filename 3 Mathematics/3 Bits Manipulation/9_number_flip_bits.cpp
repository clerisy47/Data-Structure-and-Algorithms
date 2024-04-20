#include<bits/stdc++.h>
using namespace std;

int countSetBits(int num)
{
    int count=0;
    while(num>0){
        num = num & (num-1);
        count++;
    }
    return count;
}

int numberOfFlipBits(int num1, int num2){
    int xor_nums = num1^num2;
    return countSetBits(xor_nums);
}

int main(){
    
    return 0;
}