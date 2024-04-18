#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str)
{

    static int i = 0;
    static int n = str.size();
    if (i >= n / 2)
    {
        return true;
    }
    i++;
    return str[i] == str[n - 1 - i] * isPalindrome(str);
}

// Time Complexity O(n)
