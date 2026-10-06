class Solution:
    def validPalindrome(self, s: str) -> bool:
        def isPalindrome(l, r):
            while l < r:
                if not s[l].isalnum(): l += 1
                elif not s[r].isalnum(): r -= 1
                elif s[l].lower() != s[r].lower(): 
                    return False
                else: 
                    l += 1
                    r -= 1
            return True
                
        l, r = 0, len(s) - 1
        while l < r:
            if s[l] != s[r]:
                return (isPalindrome(l + 1, r) or
                        isPalindrome(l, r -1))
            l += 1
            r -= 1

        return True


    
    
        