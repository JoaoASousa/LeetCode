'''
Runtime: 76 ms. Beats 80.30%.
Memory: 16.9 MB. Beats 17.99%.
'''
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        operators = ["+", "-", "*", "/"]

        for token in tokens:
            if token in operators:
                operand_2 = stack.pop()
                operand_1 = stack.pop()
                
                if (token == "+"):
                    result = operand_1 + operand_2
                elif (token == "-"):
                    result = operand_1 - operand_2
                elif (token == "*"):
                    result = operand_1 * operand_2
                elif (token == "/"):
                    result = int(operand_1 / operand_2)
                    
                stack.append(result)

            else:
                stack.append(int(token))

        return stack[0]