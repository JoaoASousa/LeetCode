'''
Runtime: 53 ms. Beats 13.67%.
Memory: 16.5 MB. Beats 6.92%.
'''
class Solution:
    def isValid(self, s: str) -> bool:
        if (len(s) == 1):
            return False

        stack = []

        for char in s:
            if (char == '(' or char == '[' or char == '{'):
                stack.append(char)
            elif (len(stack) == 0):
                return False
            elif (char == ')' and stack[-1] == '('):
                stack.pop()
            elif (char == ']' and stack[-1] == '['):
                stack.pop()
            elif (char == '}' and stack[-1] == '{'):
                stack.pop()
            else:
                return False

        return len(stack) == 0