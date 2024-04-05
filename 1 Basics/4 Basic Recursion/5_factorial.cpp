#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long facto(long long n){
            if(n==0||n==1) return 1;

            return n* facto(n-1);
        }

};