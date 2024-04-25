// 0 1 1 2 3 5 8 13

#include<bits/stdc++.h>
using namespace std;

int DP[1000];
// Basic Recursion
int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

// Time Complexity O(2^n)
// Space Complexity O(n)


// Memoization
int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    if(DP[n]!=-1)
    return DP[n];

    return DP[n] = (Fibonacci(n - 1) + Fibonacci(n - 2));
}
// Time Complexity O(n)
// Space Complexity O(n)

// Dynamic Programming
int Fibonacci(int n)
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

int main(){
    fill_n(DP, 1000, -1);
    return 0;
}
