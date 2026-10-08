class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        
        for t in tokens:
            if t == "+":
                res = st.pop() + st.pop()
                st.append(res)
            elif t == "*":
                res = st.pop() * st.pop()
                st.append(res)
            elif t == "-":
                res = -(st.pop() - st.pop())
                st.append(res)
            elif t == "/":
                a, b = st.pop(), st.pop()
                res = int(b / a)
                st.append(res)
            else:
                st.append(int(t))
        
        return st.pop()
        