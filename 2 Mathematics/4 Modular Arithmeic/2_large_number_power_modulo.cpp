// https://codeforces.com/problemset/problem/742/A
// print: last digit 1378^n
// 1378%10= 8, find 8^n % 10

#include<bits/stdc++.h>
using namespace std;

int mod_multiply(int x, int y, int m)
{
    return (x % m * y % m)%m;
}

int mod_power(int x, int y, int m){
    int ans=1;
    while(y){
        if(y&1){
            ans= mod_multiply(ans ,x, m);
        }
        x= mod_multiply(x, x, m);
        y>>=1;
    }
    return ans;
}

int main(){
    int n=2;
    cout<<mod_power(8,n,10);
    return 0;
}