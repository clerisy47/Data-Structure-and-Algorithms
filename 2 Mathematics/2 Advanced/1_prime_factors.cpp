#include <bits/stdc++.h>
using namespace std;

// Brute
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

vector<int> primeFactos(int n)
{
    vector<int> ans;
    for(int i=2;i<=n;i++){
        if(isPrime(i)&&n%i==0){
            ans.push_back(i);
        }
    }
    return ans;
}

// Optimal
vector<int> primeFactors(int n)
{
    vector<int> output;
    int i = 2;
    for(int i=2; i*i<=n;i++)
    {
        if (n % i == 0)
        {
            output.push_back(i);
            while(n%i==0)
                n /= i;
        }
    }
    if(n!=1) output.push_back(n); // to insert factor that comes after i*i<=n
    return output;
}

// TC: O(sqrtn*logn)
// SC: O(x)
