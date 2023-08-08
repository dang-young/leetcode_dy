class Solution {
public:
    bool isPalindrome(int x) {
        int remainder, reverse = 0, n=x;
        if(x<0) return false;
        while(n != 0) {
            if(reverse > (pow(2,31)-1)/10) return false; //overflow
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }
        if(x==reverse) return true; else return false;
    }
};