'''
Runtime: 1454 ms. Beats 63.85%.
Memory: 20.5 MB. Beats 54.68%.
'''
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        triplets = []
        nums.sort()

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue

            l = i + 1
            r = len(nums) - 1
            
            while l < r:
                sum3 = nums[i] + nums[l] + nums[r]

                if sum3 > 0:
                    r -= 1
                elif sum3 < 0:
                    l += 1
                else: # sum3 == 0
                    triplets.append([nums[i], nums[l], nums[r]])
                    l += 1

                    while l < r and nums[l] == nums[l - 1]:
                        l += 1

        return triplets