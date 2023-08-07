class Solution {
public:
    bool isPalindrome(int n) {
        if(n < 0) return false;
        int rem = 0;
        long digit = 0;
        int num= n;
        while(num) {
            rem = num % 10;
            digit = 10*digit + rem;
            num/=10;
        }
        return n == digit;

    }
};