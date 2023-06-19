'''
Runtime: 53 ms. Beats 27.41%.
Memory: 16.2 MB. Beats 87.00%.
'''
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:

        extra = 1

        for i in range(len(digits) - 1, -1, -1):
            tempExtra = (digits[i] + extra) // 10
            digits[i] = (digits[i] + extra) % 10
            extra = tempExtra

        if extra == 1: # need to add 1 digit
            digits.insert(0,1)

        return digits