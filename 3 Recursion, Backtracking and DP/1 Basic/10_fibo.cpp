// 0 1 1 2 3 5 8 13

#include<bits/stdc++.h>
using namespace std;

int DP[1000];
// Basic Recursion
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

// Time Complexity O(2^n)
// Space Complexity O(n)


// Memoization
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    if(DP[n]!=-1)
    return DP[n];

    return DP[n] = (fibonacci(n - 1) + fibonacci(n - 2));
}
// Time Complexity O(n)
// Space Complexity O(n)

// Dynamic Programming
int fibonacci(int n)
{
    DP[0]=0;
    DP[1]=1;
    for(int i=2; i<=n; i++){
        DP[i]= DP[i-1]+ DP[i-2];
    }
    return DP[n];
}
// Time Complexity O(n)
// Space Complexity O(n)

// O(logn) in mathematics folder

int main(){
    fill_n(DP, 1000, -1);
    return 0;
}
