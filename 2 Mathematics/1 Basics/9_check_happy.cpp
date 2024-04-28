// A happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit.

#include <bits/stdc++.h>
using namespace std;

int sum_square(int n)
{
    int sum = 0;
    while (n >= 1)
    {
        sum += pow(n % 10, 2);
        n /= 10;
    }
    return sum;
}

// Brute Force
bool isHappy(int n)
{
    unordered_set<int> s;
    while (s.find(n) == s.end())
    {
        s.insert(n);
        n = sum_square(n); // function avoids copy variable and makes code cleaner
        if (n == 1)
            return true;
    }
    return false;
}
// TC: O(n)
// SC: O(n)

// Optimized
// Floyd's tortoise and hare (two pointers with one fast and one slow)
bool isHappy(int n)
{
    int slow = sum_square(n), fast = sum_square(sum_square(n)); // function avoids copy variable and makes code cleaner
    while (slow != fast) // fast!=1 can be added for more optimization
    {
        slow = sum_square(slow);
        fast = sum_square(sum_square(fast));
    }
    return fast == 1;
}
// TC: O(n)
// SC: O(1)

int main()
{

    return 0;
}