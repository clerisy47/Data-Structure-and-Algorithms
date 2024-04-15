// Here all the loops are N-2 as N is final number of series not size of array a

#include <bits/stdc++.h>
using namespace std;

// Brute Force
int missingNumber(vector<int> &a, int N)
{   
    for(int i=1;i<=N;i++){
        bool isInside=false;
        for(int j=0;j<=N-2;j++){ 
            if(i==a[j]){
                isInside = true;
                break;
            }
        }
        if(!isInside) return i;
    }
}

// Hashing
int missingNumber(vector<int> &a, int N)
{
    vector<int> hash(N+1);
    for(int i=0;i<=N-2;i++){           
        hash[a[i]]=1;
    }
    for(int i=1; i<=N; i++){
        if(hash[i]==0) return i;          
    }
}

// Summation
// For bigger integers, it causes memory overflow and may require to use long which occupies more memory
int missingNumber(vector<int> &a, int N)
{   int sum=0;
    for(int i=0;i<=N-2;i++) sum+=a[i];
    return N*(N+1)/2-sum; 
}

// XOR Bit Manipulation
// Memory Efficient
int missingNumber(vector<int> &a, int N)
{   int xor1=0, xor2=0;
    int i;
    for(i=0;i<=N-2;i++){
        xor1^=(i+1);
        xor1^=a[i];
    }
    xor1^=i+1;
    return xor1^xor2; 
}

int main()
{

    return 0;
}