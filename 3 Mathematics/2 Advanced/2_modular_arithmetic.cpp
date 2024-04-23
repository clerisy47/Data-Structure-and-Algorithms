#include <bits/stdc++.h>
using namespace std;

int mod_sum(int x, int y, int m)
{
    return (x % m + y % m) % m;
}

int mod_sub(int x, int y, int m)
{
    return (x % m - y % m + m) % m;
}

int mod_multiply(int x, int y, int m)
{
    return (x % m * y % m)%m;
}

int mod_power(int x, int y, int m){
    int ans=1;
    while(y){
        if(y%2==0){
            x = (x*x)%m;
            y= (y/2)%m;
        }
        else{
            ans= (ans*x)%m;
            y= (y-1)%m;
        }
    }
}

int mod_divide(int x, int y, int m){
    int mmi = 1;
    return (x % m * mmi % m)%m;

}

int mod_factorial(int x, int m){
    int ans=1;
    for(int i=2; i<=x; i++){
        ans= (ans*2)%m;
    }   
}

int main()
{

    return 0;
}