'''
Runtime: 1318 ms. Beats 76.94%.
Memory: 31.8 MB. Beats 16.97%.
'''
class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:

        result = [0] * len(temperatures)
        stack = []

        for i, t in enumerate(temperatures):
            while stack and t > stack[-1][0]:
                popT, popI = stack.pop()
                result[popI] = (i - popI)
            stack.append([t, i])

        return result