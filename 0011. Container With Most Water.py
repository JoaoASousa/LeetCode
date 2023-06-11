'''
Runtime: 731 ms. Beats 64.77%.
Memory: 29.3 MB. Beats 55.99%.
'''
class Solution:
    def maxArea(self, height: List[int]) -> int:
        volume = 0

        l = 0
        r = len(height) - 1

        while l < r:
            volume = max(volume, (r - l) * min(height[l], height[r]))

            if  height[l] < height[r]:
                l += 1
            else:
                r -= 1

        return volume