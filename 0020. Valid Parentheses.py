'''
Runtime: 42 ms. Beats 68.49%.
Memory: 16.2 MB. Beats 72.10%.
'''
class Solution:
    def isValid(self, s: str) -> bool:
        mapStartEnd = {")": "(", "]": "[", "}": "{"}

        stack = []
        
        for char in s:
            if char in mapStartEnd : # it is one of the closing brackets
                if stack and stack[-1] == mapStartEnd[char]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(char)

        return len(stack) == 0

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