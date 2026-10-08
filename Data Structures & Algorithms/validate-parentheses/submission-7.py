class Solution:
    # def isValid(self, s: str) -> bool:
    #     stack = []

    #     for br in s:
    #         if br == "[" or br == "{" or br == "(":
    #             stack.append(br)
    #         elif br == "]":
    #             if not stack or stack.pop() != "[":
    #                 return False
    #         elif br == "}":
    #             if not stack or stack.pop() != "{":
    #                 return False
    #         elif br == ")":
    #             if not stack or stack.pop() != "(":
    #                 return False

    #     return True if not stack else False

    def isValid(self, s: str) -> bool:
        stack = []
        closeToOpen = {"}" : "{", "]" : "[", ")" : "("}

        for c in s:
            if c in closeToOpen:
                if stack and stack[-1] == closeToOpen[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)

        return False if stack else True
            
        