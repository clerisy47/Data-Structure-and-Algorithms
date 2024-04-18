#include<bits/stdc++.h>
using namespace std;

// Brute Force
int countDigits(int num)
{
    int count = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        count += 1;
        num /= 10;
    }
    return count;
}
// TC: O(log10(n))
// SC: O(1)

//Optimal assuming num is natural number
int countDigits(int num)
{
    return floor(log10(num)) + 1;
}

// TC: O(1)
// SC: O(1)



int main(){
    
    return 0;
}


// floor(log10(x)) + 1  for best time and space complexity