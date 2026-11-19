class Solution:
    def isPalindrome(self, s: str) -> bool:
        d = "".join(ch.lower() for ch in s if ch.isalnum())
        d=d.lower()
        l=0
        r=len(d)-1
        while l<r:
            if d[l]!=d[r]:
                return False
            l+=1
            r-=1
        return True
            

             
    