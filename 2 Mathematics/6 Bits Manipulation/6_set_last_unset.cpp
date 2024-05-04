// if there are no unset bits return the same number

#include<bits/stdc++.h>
using namespace std;

int setLastUnsetBit(int num){
    if((num&(num+1))==0) return num; // checks if it is  all ones ie no unset bit
    return num | (num+1);
}

int main(){
    cout<< setLastUnsetBit(17);
    return 0;
}