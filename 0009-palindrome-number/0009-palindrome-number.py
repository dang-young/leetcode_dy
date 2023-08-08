class Solution:
    def isPalindrome(self, x: int) -> bool:
        reverse = 0
        n = x
        if x<0:
            return False
        while n!=0:
            if reverse > (math.pow(2,31)-1)/10:
                return False
            remainder = n % int(10)
            reverse = reverse * 10 + remainder
            n = int(n/10)
        if x==reverse:
            return True
        else:
            return False