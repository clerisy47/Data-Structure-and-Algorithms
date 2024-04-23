#include<bits/stdc++.h>
using namespace std;

double power(double x, int n)
{
    if(n==0) return 1.0;
    if (n < 0) return power(1/x, -n);
    if (n % 2 == 0) return power(x*x, n/2);
    return x*power(x,n-1);
}

int main(){
    
    return 0;
}