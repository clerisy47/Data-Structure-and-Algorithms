// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        int copy_x=x;
        long rev=0;             // used long to solve overflow issue reversing a number closer to int range may go beyond the range
        if(x<0) return 0; 
        while(copy_x!=0){
            rev = rev*10 + copy_x%10;
            copy_x/= 10;
        }
        return x == rev;
    }
};
// More Optimum and avoids overflow
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x!=0 && x%10 ==0 ) {
            return false;
        }

        int rev = 0;
        while (x > rev) {
            rev = rev* 10 + x % 10;
            x /= 10;
        }
        return (x == rev) || (x == rev/ 10);
    }
};