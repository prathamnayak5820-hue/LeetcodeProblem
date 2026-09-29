class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!= len(t):
            return False

        d={}
        z={}
        for i in s:
            d[i]=d.get(i,0)+1
        for i in t:
            z[i]=z.get(i,0)+1
        if d==z:
            return True
        else:
            return False