class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for br in s:
            if br == "[" or br == "{" or br == "(":
                stack.append(br)
            elif br == "]":
                if not stack or stack.pop() != "[":
                    return False
            elif br == "}":
                if not stack or stack.pop() != "{":
                    return False
            elif br == ")":
                if not stack or stack.pop() != "(":
                    return False

        return True if not stack else False
            
        