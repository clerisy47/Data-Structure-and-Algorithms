//https://leetcode.com/problems/reverse-integer/

#include<bits/stdc++.h>

class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){
            if (rev>INT_MAX/10 || rev<INT_MIN/10) return 0; // check if rev is outside the range of int
            rev= rev*10 + x%10;
            x/= 10;            
        }
        return rev;
    }
};

// Time Complexity O(n) Space Complexity O(1)
