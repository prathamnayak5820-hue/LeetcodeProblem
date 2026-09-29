class Solution:
    def isPalindrome(self, x: int) -> bool:
        # Negative numbers are not palindromes
        if x < 0:
            return False
        
        temp=x
        r = 0
        
        while temp > 0:
            d = temp % 10
            r = (r * 10) + d
            temp = temp // 10
        
        return r == x