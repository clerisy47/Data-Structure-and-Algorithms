#include<bits/stdc++.h>
using namespace std;

int numberDivisors(int n) // using prime factorization
{
    int i = 2, count=1;
    for(int i=2; i*i<=n;i++)
    {
        if (n % i == 0)
        {
            count++;
            while(n%i==0)
                n /= i;
                count++;
        }
    }
    if(n!=1) count++; // to insert factor that comes after i*i<=n
    return count;
}

// Optimized version through sieve


int main(){
    cout<<numberDivisors(9);
    return 0;
}