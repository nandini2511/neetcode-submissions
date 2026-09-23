class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # def zero(): return 0
        al = defaultdict(int) #dictionary where if the key
                              #doesnt exist it'll first get 
                              #initialized to 0

        # for i in s:
        #     if i not in al:
        #         al[i] = int()
        #     al[i] += 1

        for i in s:
            al[i] += 1
        
        for i in t:
            al[i] -= 1

        for i in al.values():
            if i != 0:
                return False
        return True

        