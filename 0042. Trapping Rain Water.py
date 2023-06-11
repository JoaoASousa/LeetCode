'''
Runtime: 161 ms. Beats 16.36%.
Memory: 18.4 MB. Beats 46.19%.
'''
class Solution:
    def trap(self, height: List[int]) -> int:
        l = 0
        r = len(height) - 1
        
        maxLeft = [0] * len(height)
        
        for i in range(len(height)):
            if i > 0:
                if height[i] > maxLeft[i - 1]:
                    maxLeft[i] = height[i]
                else:
                    maxLeft[i] = maxLeft[i - 1]
            else:
                maxLeft[i] = height[i]
            
        maxRight = [0] * len(height)

        for i in range(len(height) - 1, -1, -1):
            if i < len(height) - 1:
                if height[i] > maxRight[i + 1]:
                    maxRight[i] = height[i]
                else:
                    maxRight[i] = maxRight[i + 1]
            else:
                maxRight[i] = height[i]

        result = 0

        for i in range(len(height)):
            result += min(maxLeft[i], maxRight[i]) - height[i]

        return result