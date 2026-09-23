class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        def zero(): return 0
        al = defaultdict(zero) #dictionary
        
        for i in s:
            al[i] += 1
        
        for i in t:
            al[i] -= 1

        for i in al.values():
            if i != 0:
                return False
        return True

        