// note we're using zero indexing here

#include <bits/stdc++.h>
using namespace std;

// find nth x rth element of pascal's triangle
// Brute Force: Find from factorial formula
int nCr(int n, int r)
{
    int output = 1;
    for (int i = 0; i <= r - 1; i++)
    {
        // output *= (n-i)/(r-i); // this fails because of integer division
        output *= (n - i); // can't do both in same line as it fails because of integer division
        output /= (i + 1);
    }
    return output;
}
// TC: O(r)

// nth row
// Brute Force: Find each terms from nCr formula
vector<int> generateRow(int n)
{
    vector<int> output;
    int ans = 1;
    output.push_back(1);
    for (int i = 0; i <= n - 1; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
        output.push_back(ans);
    }
    return output;
}
// TC: O(n)

// full triangle
// Brute Force: Find each terms from nCr formula

// Dynamic Programming Approach
vector<vector<int>> generateMatrix(int n){
    vector<vector<int>> output(n);
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
            if(j==0||j==i) output[i].push_back(1);
            else{
                output[i].push_back(output[i-1][j-1]+output[i-1][j]);
            }
        }
    }
    return output;
}
// TC: O(n^2)


// Generating row from above function
vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> output;
    for (int i = 1; i <= n-1; i++) {
        output.push_back(generateRow(i));
    }
    return output;
}

// TC: O(n^2)

