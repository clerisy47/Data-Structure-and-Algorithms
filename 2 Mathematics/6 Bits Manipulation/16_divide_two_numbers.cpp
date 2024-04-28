#include<bits/stdc++.h>
using namespace std;

// Brute Force
int divideTwoInteger(int dividend, int divisor) {
	int count = 0;
	bool positive=true;
    if((dividend>0&&divisor<0)||(dividend<0&&divisor>0)) positive=false;
    dividend=abs(dividend);
    divisor=abs(divisor);
    while(dividend>=divisor){
        count++;
        dividend-=divisor;
    }
    if(positive)
    return count;
    return -count;
} 
// TC: O(n) (worst case ie divisor=1)

// Bit Manipulation
int divideTwoInteger(int dividend, int divisor) {
	int count = 0;
	bool positive=true;
    if((dividend>0&&divisor<0)||(dividend<0&&divisor>0)) positive=false;
    dividend=abs(dividend);
    divisor=abs(divisor);
    while(dividend>=divisor){
        int curr_count=0;
        while(dividend>=(divisor<<(curr_count)))
            curr_count++;
        curr_count--; // one extra curr_count occurs because of which the loop fails, hence to revert it, this is done
        count+=1<<(curr_count);
        dividend-=divisor<<curr_count;       // x<<y = x* 2^y
    }
    if(positive)
    return count;
    return -count;
} 
// TC: O(logn*logn) = O(log 2n) (approximately)


int main(){
    
    return 0;
}