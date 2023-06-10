'''
Runtime: 236 ms. Beats 69.22%.
Memory: 23.5 MB. Beats 73.15%.
'''
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        output = [1 for i in range(len(nums))]

        prefix = 1
        for i in range(len(nums)):
            output[i] = prefix
            prefix *= nums[i]

        sufix = 1
        for i in range(len(nums) - 1, -1, -1):
            output[i] *= sufix
            sufix *= nums[i]

        return output

'''
Runtime: 252 ms. Beats 30.26%.
Memory: 25.8 MB. Beats 6.5%.
'''
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        prefixes = [1 for i in range(len(nums))]
        suffixes = [1 for i in range(len(nums))]

        for i in range(1, len(nums)):
            prefixes[i] = nums[i-1] * prefixes[i-1]
        
        for i in range(len(nums) - 2, -1, -1):
            suffixes[i] = nums[i+1] * suffixes[i+1]

        output = [prefixes[i] * suffixes[i] for i in range(len(nums))] 

        return output