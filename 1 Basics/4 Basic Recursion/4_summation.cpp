#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int sum(int n){
            if(n==0) return 0;

            return n+ sum(n-1);
        }

};