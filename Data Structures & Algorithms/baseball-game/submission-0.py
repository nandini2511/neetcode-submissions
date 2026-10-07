#add/remove from list
#add/subtract from result

class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        res = 0

        for op in operations:
            if op == "+":
                res += stack[-1] + stack[-2]
                stack.append(stack[-1] + stack[-2])
            elif op == "C":
                res -= stack.pop()
            elif op == "D":
                stack.append(2 * stack[-1])
                res += stack[-1]
            else:
                stack.append(int(op))
                res += stack[-1]
        
        return res
            

        