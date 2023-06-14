'''
Runtime: 518 ms. Beats 49.75%.
Memory: 30.8 MB. Beats 79.99%.
'''
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        if len(nums) == 0:
            return 0

        nums.sort()
        max_seq = 1
        current_seq = 1

        for i in range(1, len(nums)):
            if nums[i] - nums[i - 1] == 0:
                continue
            elif nums[i] - nums[i - 1] != 1:
                current_seq = 1
            else:
                current_seq += 1
            
            max_seq = max(max_seq, current_seq)
        
        return max_seq