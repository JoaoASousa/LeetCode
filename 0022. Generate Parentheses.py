'''
Runtime: 44 ms. Beats 71.28%.
Memory: 16.8 MB. Beats 5.64%.
'''
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:

        # add open par if open count < n
        # add close par if close count < open
        # valid if open = close


        stack = []
        res = []


        def backtracking(openN, closedN):
            if openN == closedN == n:
                res.append("".join(stack))
                return 
            
            if openN < n:
                stack.append("(")
                backtracking(openN + 1, closedN)
                stack.pop()

            if closedN < openN:
                stack.append(")")
                backtracking(openN, closedN + 1)
                stack.pop()
        
        backtracking(0,0)

        return res