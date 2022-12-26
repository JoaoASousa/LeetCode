'''
Runtime: 450 ms. Beats 96.94%.
Memory: 26 MB. Beats 69.91%.
'''
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(set(nums)) != len(nums)


'''
Runtime: 535 ms. Beats 71.4%.
Memory: 26.1 MB. Beats 28.77%.
'''
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        
        if (len(nums) == 1): return False

        last = nums[0]
        for i in range(1, len(nums)):
            if nums[i] == last:
                return True
            last = nums[i]

        return False
